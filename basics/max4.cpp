/*************************************************************************
	> File Name: max4.cpp
	> Author: Han Lulu
	> Mail: 
	> Created Time: 2018年12月10日 星期一 19时46分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
//任何两个类型数值的最大者
template<typename T>
T max(T a,T b)
{
    std::cout << "max<T>()\n" << endl;
    return b < a ? a : b;
}
//任何三个类型数值的最大者
template<typename T>
T max(T a,T b, T c)
{
    cout << "max<>(a,b,c)" << endl;
    return max(max(a,b),c); // 即使是int类型，也使用模板版本的max()函数
}
/*/由于下面的声明出现的太晚
int max(int a,int b)
{
    std::cout << "max(int,int)\n";
    return b < a ? a : b;
}*/
int main()
{
    ::max(47,11,33); // 使用max<T>()替代max(int,int)
    return 0;
}


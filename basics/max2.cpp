/*************************************************************************
	> File Name: max2.cpp
	> Author: Han Lulu
	> Mail: 
	> Created Time: 2018年12月09日 星期日 22时19分26秒
 ************************************************************************/

#include<iostream>
using namespace std;

//求两个int数的最大值
int max(int a, int b)
{
    return b < a ? a:b;
}
//求任何两个类型的最大值
template<typename T>
T max(T a, T b)
{
    return b < a ? a : b;
}

int main()
{

    ::max(7,4.2); // 为两个int值调用非模板的函数
    ::max(7.0,42.0); // 通过参数推断调用max<double>
    ::max('a','b'); // 通过参数推断调用max<char>
    ::max<>(7,42); // 通过参数推断调用max(int)
    ::max<double>(7,42); // 没有经过参数推断，调用max<double>
    ::max('a',42.7); // 为两个int值调用非模板的函数
    
    return 0;
}


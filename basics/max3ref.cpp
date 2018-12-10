/*************************************************************************
	> File Name: max3ref.cpp
	> Author: Han Lulu
	> Mail: 
	> Created Time: 2018年12月10日 星期一 19时08分23秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
//任何两个类型的数值的最大者（传引用）
template<typename T>
T const& max(T const& a,T const& b)
{
    return b < a ? a : b;
}
//两个C风格字符串的最大者（传值）
char const* max(char const* a, char const* b)
{
    return std::strcmp(b,a) < 0 ? a : b;
}
//任何类型的三个值的最大者（传引用）
template<typename T>
T const& max(T const& a, T const& b, T const& c)
{
    return max(max(a,b),c); // 如果是传引用，那么出错
}
int main()
{
    auto m1 = ::max(7,42,68); // 正确:
    char const* s1 = "frederic";
    char const* s2 = "anica";
    char const* s3 = "lucas";
    auto m2 = ::max(s1,s2,s3); // 运行时出错
    return 0;
}


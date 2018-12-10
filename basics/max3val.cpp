/*************************************************************************
	> File Name: max3val.cpp
	> Author: Han Lulu
	> Mail: 
	> Created Time: 2018年12月10日 星期一 17时16分55秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//任何类型的两个值的最大值
template<typename T>
T max (T a, T b)
{
    return b < a ? a : b;
}
//两个指针的最大值
template<typename T>
T* max (T* a, T* b)
{
    return *b < *a ? a : b;
}
//连个C风格字符串的的最大值
char const* max(char const* a,char const* b)
{
    return std::strcmp(b,a) < 0 ? a : b;
}
int main()
{
    int a = 7;
    int b = 42;
    auto m1 = ::max(a,b); // 两个int类型数的最大值
    

    cout << "m1=" << m1 << endl;

    std::string s1 = "hey";
    std::string s2 = "you";
    auto m2 = ::max(s1,s2); // 两个std::string类型数的最大值

    cout << "m2=" << m2 << endl;

    int* p1 = &b;
    int* p2 = &a;
    auto m3 = ::max(p1,p2);// 两个指针的最大值

    cout << "m3=" << *m3 << endl;

    char const* x = "hello";
    char const* y = "world";
    auto m4 = ::max(x,y); // 两个C风格字符串的最大值

    cout << "m4=" << m4 << endl;

    return 0;
}


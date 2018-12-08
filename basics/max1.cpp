/*************************************************************************
	> File Name: max1.cpp
	> Author: Han lulu
	> Mail: 
	> Created Time: 2018年12月08日 星期六 12时14分23秒
 ************************************************************************/

#include<iostream>
#include<string>
#include"max1.hpp"
using namespace std;

int main()
{
    int i = 42;
    cout << "max(7,i)=" << ::max(7,i) << endl;

    double f1 = 3.4;
    double f2 = -6.7;
    cout << "max(f1,f2)=" << ::max(f1,f2) << endl;

    string s1 = "matchematics";
    string s2 = "math";
    cout << "max(s1,s2)=" << ::max(s1,s2) << endl;

    return 0;
}


/*************************************************************************
	> File Name: maxdefault4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月10日 星期一 17时02分42秒
 ************************************************************************/

#include<iostream>
#include"maxdefault4.hpp"
using namespace std;

int main()
{
    cout << "::max(4,7.2)=" << ::max(4,7.2) << endl;

    cout << "::max<long double>(7.2,4)=" << ::max<long double>(7.2,4) << endl;

    return 0;
}


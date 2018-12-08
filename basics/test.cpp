/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月08日 星期六 11时45分10秒
 ************************************************************************/

#include<iostream>
#include"maxdecltypedecay.hpp"
using namespace std;

int main()
{
    auto i = ::max(7,9.08);
    cout << "i=" << i << endl;

    auto d = ::max(9.08,7);
    cout << "d=" << d << endl;

    cout << "...................test.................." << endl;
    return 0;
}

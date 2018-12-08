/*************************************************************************
	> File Name: maxcommon.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月08日 星期六 11时37分59秒
 ************************************************************************/

#include<iostream>
#include"maxcommon.hpp"
using namespace std;

int main()
{
    auto i = ::max(4,7.2);

    cout << "i = " << i << endl;

    auto d  = ::max(7.2,4);

    cout << "d = " << d << endl;


    return 0;
}

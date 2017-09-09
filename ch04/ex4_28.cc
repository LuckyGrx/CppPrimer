 ///
 /// @file    ex4_28.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-16 22:35:05
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(){//在64位系统下
	cout<<"sizeof(bool)="<<sizeof(bool)<<endl;//1
	cout<<"sizoef(char)="<<sizeof(char)<<endl;//1
	cout<<"sizeof(short)="<<sizeof(short)<<endl;//2
	cout<<"sizeof(int)="<<sizeof(int)<<endl;//4
	cout<<"sizeof(float)="<<sizeof(float)<<endl;//4
	cout<<"sizeof(double)="<<sizeof(double)<<endl;//8
	cout<<"sizeof(long)="<<sizeof(long)<<endl;//8
	cout<<"sizeof(long long)="<<sizeof(long long)<<endl;//8
	cout<<"sizeof(long double)="<<sizeof(long double)<<endl;//16
	return 0;
}

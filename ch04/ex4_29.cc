 ///
 /// @file    ex4_29.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-16 22:48:55
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(){//在64位系统下
	int x[10];
	int* p=x;
	cout<<sizeof(x)/sizeof(*x)<<endl;//10
	cout<<sizeof(p)/sizeof(*p)<<endl;//2
	return 0;
}
//说明：
//sizeof(x)是求数组x的大小，为40
//sizeof(*x)是求数组x的第一个元素x[0]的大小，为4
//
//sizeof(p)是求指针p的大小，在64位系统下为8，在32位系统下为4
//sizeof(*p)是求int类型的大小，为4

 ///
 /// @file    ex2_18.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-07 15:29:33
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(){
	int val=0,val2=1;
	int* p=&val;
	cout<<"p="<<p<<endl;
	p=&val2;//更改指针的值
	cout<<"p="<<p<<endl;
	cout<<endl;
	cout<<"*p="<<*p<<endl;
	*p=val;//更改指针所指向的对象的值
	cout<<"*p="<<*p<<endl;
	return 0;
}

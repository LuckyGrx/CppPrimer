 ///
 /// @file    ex6_51.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-26 20:46:22
 ///

#include <iostream>
using std::cout;
using std::endl;
void f(){
	cout<<"void f()"<<endl;
}
void f(int a){
	cout<<"void f(int)"<<endl;
}
void f(int a,int b){
	cout<<"void f(int,int)"<<endl;
}
void f(double a,double b=3.14){
	cout<<"void f(double,double)"<<endl;
}

int main(){
	//f(2.56,42);//call to 'f' is ambiguous
	f(42);
	f(42,0);
	f(2.56,3.14);
	return 0;
}

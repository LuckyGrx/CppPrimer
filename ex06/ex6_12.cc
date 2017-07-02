 ///
 /// @file    ex6_12.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 19:25:31
 ///
 
#include <iostream>
using std::cout;
using std::endl;
void swap(int& a,int& b){//显然引用更易于使用呀，因为在函数体内不需要再加*操作符
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	int a=0,b=1;
	cout<<"a= "<<a<<","<<"b= "<<b<<endl;
	swap(a,b);
	cout<<"a= "<<a<<","<<"b= "<<b<<endl;
	return 0;
}

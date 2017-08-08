 ///
 /// @file    ex5_23.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-17 17:21:30
 ///
 
#include <iostream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main(){
	int a,b;
	while(cout<<"please input two integers:",cin>>a>>b){
		if(0==b)
			throw runtime_error("divisor is 0");
		cout<<"a/b="<<(float)a/b<<endl;
	}
	return 0;
}

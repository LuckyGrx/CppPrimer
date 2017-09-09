 ///
 /// @file    ex6_56.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-18 22:18:52
 ///

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int multi(int a,int b){
	return a*b;
}
int divide(int a,int b){
	return b!=0?(a/b):0;
}
int main(){
	vector<decltype(add)*> pvec{add,sub,multi,divide};
	for(const auto& elem:pvec)
		cout<<elem(1,2)<<endl;
	return 0;
}


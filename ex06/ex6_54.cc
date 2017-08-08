 ///
 /// @file    ex6_54.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-18 21:17:35
 ///
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int f(int,int);
int main(){
	int (*p)(int,int)=f;
	vector<decltype(f)*> pvec{p};
	pvec[0](1,2);
	return 0;
}
int f(int a,int b){
	cout<<a+b<<endl;
	return 1;
}

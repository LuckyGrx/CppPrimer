 ///
 /// @file    ex6_27.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-11 21:20:30
 ///
 
#include <iostream>
#include <initializer_list>
using std::cout;
using std::endl;
using std::initializer_list;

void getSum(initializer_list<int> il){
	int sum=0;
	for(auto beg=il.begin();beg!=il.end();++beg)
		sum+=*beg;
	cout<<"Sum of list is "<<sum<<endl;
}
int main(){
	getSum({1,2,3,4,5,6,7,8,9});
	return 0;
}

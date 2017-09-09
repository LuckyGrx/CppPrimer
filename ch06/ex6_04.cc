 ///
 /// @file    ex6_03.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-08 21:41:16
 ///
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int fact(int val){
	int ret=1;
	for(int idx=1;idx<=val;++idx)
		ret*=idx;
	return ret;
}

int main(){
	int val;
	while(cout<<"please input a number:",cin>>val){
		cout<<"this number's fact is "<<fact(val)<<endl;
	}
	return 0;
}

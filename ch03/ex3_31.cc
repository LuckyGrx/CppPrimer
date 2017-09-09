 ///
 /// @file    ex3_31.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 17:00:19
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int main(){
	int ia[10];
	for(size_t idx=0;idx<10;++idx){
		ia[idx]=idx;
	}
	for(auto& i:ia){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}

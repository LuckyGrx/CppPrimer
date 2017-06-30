 ///
 /// @file    ex3_31.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 17:00:19
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	int ia1[10];
	for(size_t idx=0;idx<10;++idx){
		ia1[idx]=idx;
	}
	int ia2[10];//数组拷贝
	for(size_t idx=0;idx<10;++idx){
		ia2[idx]=ia1[idx];
	}
	for(auto& elem:ia2){
		cout<<elem<<" ";
	}
	cout<<endl;

	vector<int> ivec1;
	for(size_t idx=0;idx<10;++idx){
		ivec1.push_back(idx);
	}
	vector<int> ivec2=ivec1;
	for(auto& elem:ivec2){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

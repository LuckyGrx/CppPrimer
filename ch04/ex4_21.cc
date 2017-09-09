 ///
 /// @file    ex4_21.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-08 20:39:37
 ///
 
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> ivec;
	int val;
	while(cin>>val){
		ivec.push_back(val);
	}
	for(auto& elem:ivec){
		elem=((elem%2==0)?elem:(elem*2));
	}
	for(const auto& elem:ivec){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

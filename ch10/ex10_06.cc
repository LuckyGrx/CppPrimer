 ///
 /// @file    ex10_06.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-22 20:26:29
 ///
#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::fill_n;

int main(){
	vector<int> ivec{1,2,3,4,5,6,7,8};
	cout<<"before fill_n:"<<endl;
	for(const auto& elem:ivec){
		cout<<elem<<" ";
	}
	cout<<endl;
	fill_n(ivec.begin(),ivec.size(),0);
	cout<<"after fill_n:"<<endl;
	for(const auto& elem:ivec){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

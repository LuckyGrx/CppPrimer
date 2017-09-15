 ///
 /// @file    ex9_13.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-15 20:45:29
 ///
#include <iostream>
#include <list>
#include <vector>
using std::cout;
using std::endl;
using std::list;
using std::vector;

int main(){
	list<int> ilst{1,2,3,4,5,6,7,8};
	vector<double> dvec1(ilst.begin(),ilst.end());
	for(const auto& elem:dvec1){
		cout<<elem<<" ";
	}
	cout<<endl;
	vector<int> ivec{1,2,3,4,5,6,7,8};
	vector<double> dvec2(ivec.begin(),ivec.end());
	for(const auto& elem:dvec2){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

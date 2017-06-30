 ///
 /// @file    ex3_23.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 08:56:10
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
	vector<int>::iterator it=ivec.begin();
	for(;it!=ivec.end();++it){
		*it=*it*2;
	}
	it=ivec.begin();
	for(;it!=ivec.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}

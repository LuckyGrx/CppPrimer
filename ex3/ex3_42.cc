 ///
 /// @file    ex4_42.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-18 14:37:44
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> vInt{1,2,3,4,5,6};
	int array[6];
	for(int idx=0;idx<6;++idx){
		array[idx]=vInt[idx];
	}
	for(auto item:array){
		cout<<item<<endl;
	}
	return 0;
}

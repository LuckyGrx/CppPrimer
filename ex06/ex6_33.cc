 ///
 /// @file    ex6_33.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-13 17:10:12
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
void printVector(vector<int>& ivec){
	if(!ivec.empty()){
		cout<<ivec.back()<<" ";
		ivec.pop_back();
		printVector(ivec);
	}
}
int main(){
	vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
	printVector(ivec);
	cout<<endl;
	return 0;
}

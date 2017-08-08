 ///
 /// @file    ex9_24.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 21:43:07
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;

int main(){
	vector<int> ivec;
	cout<<ivec.at(0);   //terminate called after throwing an instance of 'std::out_of_range'
	cout<<ivec[0];      //Segmentation fault
	cout<<ivec.front(); //Segmentation fault
	cout<<*ivec.begin();//Segmentation fault
	return 0;
}

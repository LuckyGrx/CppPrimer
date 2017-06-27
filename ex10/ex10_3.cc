 ///
 /// @file    ex10_3.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-27 21:55:36
 ///
 
#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> vInt{1,2,3,4,5,6};
	cout<<"accumulate of vector<int> is "<<accumulate(vInt.begin(),vInt.end(),0)<<endl;
	return 0;
}

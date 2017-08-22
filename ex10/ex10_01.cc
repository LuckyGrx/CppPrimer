 ///
 /// @file    ex10_01.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-22 21:53:43
 ///
#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::count;
using std::vector;
using std::cin;

int main(){
	vector<int> ivec;
	int val;
	while(cin>>val)
		ivec.push_back(val);
	cout<<"The count of 3 in ivec is "<<count(ivec.cbegin(),ivec.cend(),3)<<endl;
	return 0;
}


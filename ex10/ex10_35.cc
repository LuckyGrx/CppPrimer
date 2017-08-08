 ///
 /// @file    ex10_35.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-13 21:33:35
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> ivec{1,2,3,4,5,6,7,8,9};
	vector<int>::iterator iter=ivec.end()-1;
	for(;iter!=ivec.begin()-1;--iter)
		cout<<*iter<<" ";
	cout<<endl;
	return 0;
}

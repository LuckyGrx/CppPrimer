 ///
 /// @file    ex10_34.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-13 21:30:50
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> ivec{1,2,3,4,5,6,7,8,9};
	vector<int>::reverse_iterator r_iter=ivec.rbegin();
	for(;r_iter!=ivec.rend();++r_iter)
		cout<<*r_iter<<" ";
	cout<<endl;
	return 0;
}

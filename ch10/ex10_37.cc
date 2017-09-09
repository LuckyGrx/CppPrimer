 ///
 /// @file    ex10_37.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-23 15:30:29
 ///
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::reverse_copy;

int main(){
	vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
	list<int> ilst(7-3+1);
	reverse_copy(ivec.cbegin()+3,ivec.cbegin()+8,ilst.begin());
	for(const auto& elem:ilst)
		cout<<elem<<" ";
	cout<<endl;
	return 0;
}

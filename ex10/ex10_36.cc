 ///
 /// @file    ex10_36.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-02 15:29:11
 ///
#include <iostream>
#include <list>
#include <algorithm>
using std::cout;
using std::endl;
using std::find;
using std::list;

int main(){
	list<int> ilst{1,2,3,4,0,1,2,3,4,0,1,2,3};
	if(find(ilst.crbegin(),ilst.crend(),0)!=ilst.crend())
		cout<<"find a 0 in this lst"<<endl;
	else
		cout<<"can not find a 0 in this lst"<<endl;
	return 0;
}

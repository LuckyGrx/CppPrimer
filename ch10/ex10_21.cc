 ///
 /// @file    ex10_21.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-18 11:36:01
 ///
#include <iostream>
using std::cout;
using std::endl;

int main(){
	size_t val=10;
	auto f=[&]()->bool{
		--val;
		if(0==val)
			return true;
		else
			return false;
	};
	while(!f())
		cout<<val<<endl;
	return 0;
}


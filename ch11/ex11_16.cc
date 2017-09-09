 ///
 /// @file    ex11_16.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-20 20:50:16
 ///
#include <iostream>
#include <map>
using std::cout;
using std::endl;
using std::map;

int main(){
	map<int,int> mis;
	mis[1]=1;
	map<int,int>::iterator iter=mis.begin();
	iter->second=2;
	cout<<mis[1]<<endl;
	return 0;
}

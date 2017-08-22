 ///
 /// @file    ex10_01.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-22 21:53:43
 ///
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using std::cout;
using std::endl;
using std::count;
using std::list;
using std::string;
using std::cin;

int main(){
	list<string> slst;
	string str;
	while(cin>>str)
		slst.push_back(str);
	cout<<"The count of aa in slst is "<<count(slst.cbegin(),slst.cend(),"aa")<<endl;
	return 0;
}


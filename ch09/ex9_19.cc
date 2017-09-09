 ///
 /// @file    ex9_18.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 20:01:58
 ///
 
#include <iostream>
#include <list>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;

int main(){
	string str;
	list<string> slst;
	while(cin>>str){
		slst.push_back(str);
	}
	list<string>::const_iterator iter=slst.cbegin();
	for(;iter!=slst.cend();++iter){
		cout<<*iter<<endl;
	}
	return 0;
}

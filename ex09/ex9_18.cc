 ///
 /// @file    ex9_18.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 20:01:58
 ///
 
#include <iostream>
#include <deque>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::deque;

int main(){
	string str;
	deque<string> sdeq;
	while(cin>>str){
		sdeq.push_back(str);
	}
	deque<string>::const_iterator iter=sdeq.cbegin();
	for(;iter!=sdeq.cend();++iter){
		cout<<*iter<<endl;
	}
	return 0;
}

 ///
 /// @file    ex3_08.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-01 20:53:39
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str;
	while(cin>>str){
		decltype(str.size()) idx=0;
		while(idx<str.size()){
			str[idx++]='X';
		}
		cout<<str<<endl;
	}
	while(cin>>str){
		for(decltype(str.size()) idx=0;idx<str.size();++idx){
			str[idx]='X';
		}
		cout<<str<<endl;
	}
	return 0;
}

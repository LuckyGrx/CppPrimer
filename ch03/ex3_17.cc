 ///
 /// @file    ex3_17.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-29 22:31:46
 ///
#include <ctype.h> 
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
	string str;
	vector<string> svec;
	while(cin>>str){
		svec.push_back(str);
	}
	for(auto& elem:svec){
		for(auto& ch:elem){
			ch=toupper(ch);
		}
	}
	for(auto& elem:svec){
		cout<<elem<<endl;
	}
	return 0;
}

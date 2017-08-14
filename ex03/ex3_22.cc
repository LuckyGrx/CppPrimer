 ///
 /// @file    ex3_22.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-14 21:41:48
 ///
#include <ctype.h>
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::cin;
using std::string;

int main(){
	vector<string> text;
	string line;
	while(getline(cin,line))
		text.push_back(line);
	for(auto it=text.begin();it!=text.end()&&!it->empty();++it){
		for(auto& c:*it){
			c=toupper(c);
		}
		cout<<*it<<endl;
	}
	return 0;
}

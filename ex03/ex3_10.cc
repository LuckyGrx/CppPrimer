 ///
 /// @file    ex3_10.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-01 20:48:26
 ///
 
#include <iostream>
#include <ctype.h>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str,ret;
	while(cin>>str){
		for(auto& c:str){
			if(!ispunct(c)){
				ret+=c;
			}
		}
		cout<<ret<<endl;
		ret="";
	}
	return 0;
}

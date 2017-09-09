 ///
 /// @file    ex3_07.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-01 20:33:03
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
		for(char& c:str){
			c='X';
		}
		cout<<str<<endl;
	}
	return 0;
}

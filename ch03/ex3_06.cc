 ///
 /// @file    ex3_06.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-01 20:28:29
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
		for(auto& c:str){
			c='X';
		}
		cout<<str<<endl;
	}
	return 0;
}

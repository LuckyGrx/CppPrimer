 ///
 /// @file    ex3_05.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 19:31:55
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
	string str;
	string ret;
	while(getline(cin,str)){
		ret.append(str);
	}
	cout<<"The result string is: "<<ret<<endl;
    ret=str="";
	while(getline(cin,str)){
		ret.append(" ").append(str);
	}
	cout<<"The result string with space is: "<<ret<<endl;
	return 0;
}

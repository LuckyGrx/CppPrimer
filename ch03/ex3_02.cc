 ///
 /// @file    ex3_02.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 19:14:41
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str;
	while(getline(cin,str)){
		cout<<str<<endl;
	}
	cout<<"-----------"<<endl;
	while(cin>>str){
		cout<<str<<endl;
	}
	return 0;
}

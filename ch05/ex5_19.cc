 ///
 /// @file    ex5_19.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 10:14:13
 ///
 
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string rsp; 
	do{
		cout<<"please input two strings: ";
		string str1,str2;
		cin>>str1>>str2;
		cout<<"The min size of string is "<<(str1.size()>str2.size()?str2:str1)<<endl
			<<"More?Enter yes or no: ";
		cin>>rsp;
	}while(!rsp.empty()&&rsp[0]=='y');
	return 0;
}

 ///
 /// @file    ex3_04.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 19:22:31
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	if(str1==str2){
		cout<<"two string are equal!"<<endl;
	}else if(str1>str2){
		cout<<str1<<endl;
	}else{
		cout<<str2<<endl;
	}

	if(str1.size()==str2.size()){
		cout<<"two string's size are equal!"<<endl;
	}else if(str1.size()>str2.size()){
		cout<<str1<<endl;
	}else{
		cout<<str2<<endl;
	}
	return 0;
}

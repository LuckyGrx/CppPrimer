 ///
 /// @file    ex3_39.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-18 10:56:10
 ///
#include <string.h> 
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
	string str1="hello,world!";
	string str2="hello,china!";
	if(str1==str2){
		cout<<"these two string are equal!"<<endl;
	}else{
		cout<<"these two string are not equal!"<<endl;
	}
	const char chs1[]="hello,chars!";
	const char chs2[]="hello,chars!";
	if(0==strcmp(chs1,chs2)){
		cout<<"these two chars are equal!"<<endl;
	}else{
		cout<<"these two chars are not equal!"<<endl;
	}
	return 0;
}


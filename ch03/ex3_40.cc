 ///
 /// @file    ex3_40.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-18 11:12:43
 ///
#include <string.h> 
#include <iostream>
using std::cout;
using std::endl;

int main(){
	const char str1[]="hello,world!";
	const char str2[]="hello,china!";
	int len=strlen(str1)+strlen(str2)+1;
	char str3[len];
	strcpy(str3,str1);
	strcat(str3,str2);
	cout<<str3<<endl;
	return 0;
}

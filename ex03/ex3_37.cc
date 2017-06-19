 ///
 /// @file    ex3_37.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-18 10:15:31
 ///
#include <string.h> 
#include <iostream>
using std::cout;
using std::endl;

int main(){
	const char ca[]={'h','e','l','l','o'};
	const char s[]="world";
	const char* cp=ca;
	while(*cp){
		cout<<*cp<<endl;
		++cp;
	}
	return 0;
}

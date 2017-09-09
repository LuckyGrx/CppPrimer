 ///
 /// @file    ex6_30.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-16 20:34:35
 ///
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
bool str_subrange(const string &str1,const string &str2){
	if(str1.size()==str2.size())
		return str1==str2;
	auto size=(str1.size()<str2.size())?str1.size():str2.size();
	for(decltype(size) i=0;i!=size;++i){
		if(str1[i]!=str2[i])
			return ;//no-void function 'str_subrange' should return a value
	}
	//g++编译器在编译的时候未发现这里未执行return操作
}

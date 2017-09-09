 ///
 /// @file    ex6_17.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-03 08:58:09
 ///

#include <ctype.h>
#include <string>
using std::string;
bool isContainBigLetter(const string& str){
	for(decltype(str.size()) idx=0;idx<str.size();++idx){
		if(str[idx]>='A'&&str[idx]<='Z')
			return true;
	}
	return false;
}
void stringToUpper(string& str){
	for(decltype(str.size()) idx=0;idx<str.size();++idx){
		if(str[idx]>='A'&&str[idx]<='Z'){
			str[idx]+=32;
		}
	}
}
//显然，一个形参是const string&，一个形参是string&
//因为第一个函数功能只是去查询string中有没有大写字母，不需要改变实参的值，所以用常量引用形参合适
//第二个函数需要修改形参的值，所以用引用形参合适

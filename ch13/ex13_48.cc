 ///
 /// @file    ex13_48.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-24 21:49:50
 ///
#include <stdio.h>
#include <string.h>
#include <iostream>

class String{
public:
	String():_str(new char[1]()){
		strcpy(_str,"\0");
	}
	String(const char* str){
		_str=new char[strlen(str)+1]();
		strcpy(_str,str);
	}
	String(const String& str){
		delete [] _str;
		_str=new char[str.size()+1]();
		strcpy(_str,str.c_str());
	}
	String& operator=(const String& string){
		std::cout<<"String& operator=(const String&)"<<std::endl;
		return *this;
	}
	~String(){
		delete [] _str;
	}
	size_t size()const{
		return strlen(_str);
	}
	char* c_str()const{
		return _str;
	}
private:
	char* _str;
	int _len;
};

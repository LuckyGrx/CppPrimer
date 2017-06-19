 ///
 /// @file    ex7_5.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-15 15:39:00
 ///
#ifndef __CP5_EX7_15_H__
#define __CP5_EX7_15_H__
#include <string>
using std::string;

class Person{
public:
	Person()=default;
	Person(const string name,const string addr)
	:_name(name)
	,_addr(addr){
	}
	const string& get_name()const{
		return _name;
	}
	const string& get_addr()const{
		return _addr;
	}
private:
	string _name;
	string _addr;
};
#endif

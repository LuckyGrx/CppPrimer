 ///
 /// @file    ex7_5.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-15 15:39:00
 ///
#ifndef __CP5_EX7_5_H__
#define __CP5_EX7_5_H__
#include <string>
using std::string;

class Person{
public://因为只是查询姓名和地址，所以在这些函数内部不应该修改姓名和地址的值，故这两个函数应该定义成const函数
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

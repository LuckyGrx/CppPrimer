 ///
 /// @file    ex13_18.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-08 19:04:58
 ///
#ifndef __CP5_EX13_18_H__
#define __CP5_EX13_18_H__
#include <string>

class Employee{
public:
	Employee();
	Employee(const std::string&);
private:
	std::string _name;
	int _id;
	static int _id_increase;
};
int Employee::_id_increase=0;

Employee::Employee():_name(std::string()){
	_id=_id_increase++;
}

Employee::Employee(const std::string &name):_name(name){
	_id=_id_increase++;
}
#endif

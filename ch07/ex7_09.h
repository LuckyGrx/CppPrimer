 ///
 /// @file    ex7_5.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-15 15:39:00
 ///
#ifndef __CP5_EX7_4_H__
#define __CP5_EX7_4_H__
#include <iostream>
#include <string>

class Person{
	friend std::ostream& operator<<(std::ostream &os,const Person &person);
	friend std::istream& operator>>(std::istream &is,Person &person);
private:
	std::string _name;
	std::string _addr;
};

std::ostream& operator<<(std::ostream &os,const Person &person){
	os<<person._name<<" "<<person._addr;
	return os;
}

std::istream& operator>>(std::istream &is,Person &person){
	is>>person._name>>person._addr;
	if(!is){
		person._name="";
		person._addr="";
	}
	return is;
}
#endif


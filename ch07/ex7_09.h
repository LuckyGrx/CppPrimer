 ///
 /// @file    ex7_5.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-15 15:39:00
 ///
#ifndef __CP5_EX7_9_H__
#define __CP5_EX7_9_H__
#include <iostream>
#include <string>

struct Person {
	std::string _name;
	std::string _addr;
    const std::string& get_name() const {
		return _name;
	}
	const std::string& get_addr() const {
		return _addr;
	}
};

std::ostream& print(std::ostream &os, const Person &person) {
	os << person._name << " " << person._addr;
	return os;
}

std::istream& read(std::istream &is, Person &person) {
	is >> person._name >> person._addr;
	if(!is)
		person = Person();
	return is;
}

#endif


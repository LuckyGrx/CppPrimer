#ifndef __CP5_EX7_22_H__
#define __CP5_EX7_22_H__
#include <string>
using std::string;

class Person {
    friend std::ostream& print(std::ostream&, const Person&);
    friend std::istream& read(std::istream&, Person&);
public:
	Person() = default;
	Person(const string name,const string addr): _name(name), _addr(addr) {
	}
	Person(std::istream &in) {
		read(in, *this);
	}
	const string& get_name() const {
		return _name;
	}
	const string& get_addr() const {
		return _addr;
	}
private:
	string _name;
	string _addr;
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

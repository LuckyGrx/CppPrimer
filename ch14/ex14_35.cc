#ifndef __CP5_EX14_35_H__
#define __CP5_EX14_35_H__

#include <iostream>
#include <string>

class PrintString {
public:
	PrintString(std::istream& is = std::cin) : _is(is) {
	}	
    std::string operator()() const {
		std::string str;
		std::getline(_is, str);
	    return _is ? str : std::string();
	}
private:
	std::istream& _is;
};
#endif

int main() {
	PrintString printer;
	std::cout << printer() << std::endl;
	return 0;
}

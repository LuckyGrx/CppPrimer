#ifndef __CP5_EX07_42_H__
#define __CP5_EX07_42_H__

#include <iostream>

class Date {
public:
	Date();
	Date(unsigned, unsigned, unsigned);
	Date(std::istream&);
private:
	unsigned _year;
	unsigned _month;
	unsigned _day;
};

Date::Date(): _year(1900), _month(1), _day(1) {
}

Date::Date(unsigned year, unsigned month, unsigned day): _year(year), _month(month), _day(day) {
}

Date::Date(std::istream &in): Date() {
	in >> _year >> _month >> _day;
}

#endif

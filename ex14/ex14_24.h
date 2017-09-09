 ///
 /// @file    ex7_40.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-08 19:43:15
 ///
#ifndef __CP5_EX14_12_H__
#define __CP5_EX14_12_H__
#include <iostream>
#include <string>

class Date{
	friend std::ostream& operator<<(std::ostream&,const Date&);
	friend std::istream& operator>>(std::istream&,Date&);
	friend bool operator<(const Date&,const Date&);
	friend bool operator<=(const Date&,const Date&);
	friend bool operator>(const Date&,const Date&);
	friend bool operator>=(const Date&,const Date&);
public:
	Date();
	Date(unsigned,unsigned,unsigned);
	Date& operator=(const Date&);
private:
	unsigned _year;
	unsigned _month;
	unsigned _day;
};

Date::Date():_year(1900),_month(1),_day(1){
}

Date::Date(unsigned year,unsigned month,unsigned day):_year(year),_month(month),_day(day){
}

std::ostream& operator<<(std::ostream &os,const Date &date){
	os<<date._year<<" "<<date._month<<" "<<date._day;
	return os;
}

std::istream& operator>>(std::istream &is,Date &date){
	is>>date._year>>date._month>>date._day;
	if(!is)
		date=Date();
	return is;
}

bool operator<(const Date &lhs,const Date &rhs){//暂时不知道怎么处理前置补0的方法
	return std::to_string(lhs._year)+std::to_string(lhs._month)+std::to_string(lhs._day)<
		   std::to_string(rhs._year)+std::to_string(rhs._month)+std::to_string(rhs._month);
}
bool operator<=(const Date &lhs,const Date &rhs){
	return std::to_string(lhs._year)+std::to_string(lhs._month)+std::to_string(lhs._day)<=
		   std::to_string(rhs._year)+std::to_string(rhs._month)+std::to_string(rhs._month);
}
bool operator>(const Date &lhs,const Date &rhs){
	return std::to_string(lhs._year)+std::to_string(lhs._month)+std::to_string(lhs._day)>
		   std::to_string(rhs._year)+std::to_string(rhs._month)+std::to_string(rhs._month);

}
bool operator>=(const Date &lhs,const Date &rhs){
	return std::to_string(lhs._year)+std::to_string(lhs._month)+std::to_string(lhs._day)>=
		   std::to_string(rhs._year)+std::to_string(rhs._month)+std::to_string(rhs._month);
}

Date& Date::operator=(const Date &rhs){
	_year=rhs._year;
	_month=rhs._month;
	_day=rhs._day;
	return *this;
}
#endif

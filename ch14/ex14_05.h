 ///
 /// @file    ex14_05.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-08 19:43:15
 ///
#ifndef __CP5_EX14_05_H__
#define __CP5_EX14_05_H__
#include <iostream>
#include <string>

class Date{
public:
	Date();
	Date(unsigned,unsigned,unsigned);
private:
	unsigned _year;
	unsigned _month;
	unsigned _day;
};

Date::Date():_year(1900),_month(1),_day(1){
}

Date::Date(unsigned year,unsigned month,unsigned day):_year(year),_month(month),_day(day){
}
#endif
//显然，Date类应该重载运算符，目前能想到的需要重载的运算符有：输入运算符、输出运算符、加号运算符、减号运算符、
//大于运算符、大于等于运算符、小于运算符、小于等于运算符、等于运算符、不等于运算符

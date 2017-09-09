 ///
 /// @file    ex7_40.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-08 19:43:15
 ///
#ifndef __CP5_EX07_40_H__
#define __CP5_EX07_40_H__
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
//日期类的数据成员显然有年、月、日，默认构造函数的初始化列表将_year、_month、_day设置为1900、1、1是为了更方便（再往前的日期没有什么应用场景)
//具有三个形参的构造函数显然是应该存在的，分别初始化_year、_month、_day

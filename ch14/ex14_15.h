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
public:
	Date();
	Date(unsigned,unsigned,unsigned);
	Date& operator+(unsigned);
	Date& operator-(unsigned);
private:
	int isLeap() const;
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
/*
 *闰年返回1，平年返回0
 */
int Date::isLeap() const{
	if((_year%4==0&&_year%100!=0)||(_year%400==0))
		return 1;
	return 0;
}

Date& Date::operator+(unsigned days){
	unsigned days_of_monthes[][13]={{0u,31u,28u,31u,30u,31u,30u,31u,31u,30u,31u,30u,31u},
									{0u,31u,29u,31u,30u,31u,30u,31u,31u,30u,31u,30u,31u}};
	while(days--){
		if(_day!=days_of_monthes[isLeap()][_month])
			++_day;
		else{
			_day=1;
			if(12==_month){
				_month=1;
				++_year;
			}else
				++_month;
		}
	}
	return *this;
}

Date& Date::operator-(unsigned days){
	unsigned days_of_monthes[][13]={{0u,31u,28u,31u,30u,31u,30u,31u,31u,30u,31u,30u,31u},
									{0u,31u,29u,31u,30u,31u,30u,31u,31u,30u,31u,30u,31u}};
	while(days--){
		if(_day!=1)
			--_day;
		else{
			if(1==_month){
				_month=12;
				--_year;
			}else
				--_month;
			_day=days_of_monthes[isLeap()][_month];
		}
	}
	return *this;
}
#endif

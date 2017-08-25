 ///
 /// @file    ex7_02.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 10:39:50
 ///
#ifndef __CP5_EX7_02_H__
#define __CP5_EX7_02_H__
#include <iostream>
#include <string>
class Sales_data{
public:
	std::string isbn() const;
	Sales_data &combine(const Sales_data& rhs);
private:
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};
std::string Sales_data::isbn()const{
	return bookNo;
}
Sales_data& Sales_data::combine(const Sales_data& rhs){
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}
#endif

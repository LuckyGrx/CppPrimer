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
	Sales_data& combine(const Sales_data&);
	void setBookNo(const std::string&);
	void setUnitsSold(const unsigned&);
	void setRevenue(const double&);
	const std::string& getBookNo() const;
	const unsigned& getUnitsSold() const;
	const double& getRevenue() const;
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

std::string Sales_data::isbn() const {
	return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

void Sales_data::setBookNo(const std::string &bookNo) {
	this->bookNo = bookNo;
}

void Sales_data::setUnitsSold(const unsigned &units_sold) {
	this->units_sold = units_sold;
}

void Sales_data::setRevenue(const double &revenue) {
	this->revenue = revenue;
}

const std::string& Sales_data::getBookNo() const {
	return bookNo;
}

const unsigned& Sales_data::getUnitsSold() const {
	return units_sold;
}

const double& Sales_data::getRevenue() const {
	return revenue;
}
#endif

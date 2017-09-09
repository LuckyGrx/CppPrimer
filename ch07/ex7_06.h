 ///
 /// @file    ex_26.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 10:39:50
 ///
#ifndef __CP5_EX7_06_H__
#define __CP5_EX7_06_H__
#include <iostream>
#include <string>
class Sales_data{
	friend Sales_data add(const Sales_data&,const Sales_data&);
	friend std::istream& read(std::istream&,Sales_data&);
	friend std::ostream& print(std::ostream&,const Sales_data&);
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
std::istream& read(std::istream &is,Sales_data &item){
	double price=0;
	is>>item.bookNo>>item.units_sold>>price;
	item.revenue=price*item.units_sold;
	return is;
}
std::ostream& print(std::ostream &os,const Sales_data &item){
	os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue;
	return os;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
	Sales_data sum=lhs;
	sum.combine(rhs);
	return sum;
}
#endif

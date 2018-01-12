 ///
 /// @file    ex_26.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 10:39:50
 ///
#ifndef __CP5_EX7_12_H__
#define __CP5_EX7_12_H__
#include <iostream>
#include <string>

class Sales_data{
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
public:
	Sales_data()=default;
	Sales_data(const std::string &s,unsigned n,double p):
		bookNo(s),units_sold(n),revenue(p*n){
	}
	Sales_data(const std::string &s):bookNo(s){
	}
	Sales_data(std::istream& is){
		read(is,*this);
	}
	std::string isbn() const{
		return bookNo;
	}
	Sales_data &combine(const Sales_data& rhs){
		units_sold+=rhs.units_sold;
		revenue+=rhs.revenue;
		return *this;
	}
private:
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};
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

 ///
 /// @file    ex_26.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 10:39:50
 ///
#ifndef __CP5_EX14_20_H__
#define __CP5_EX14_20_H__
#include <iostream>
#include <string>
class Sales_data{
	friend std::istream& operator>>(std::istream&,Sales_data&);
	friend std::ostream& operator<<(std::ostream&,const Sales_data&);
	friend Sales_data operator+(const Sales_data&,const Sales_data&);
public:
	Sales_data& operator+=(const Sales_data&);
	Sales_data(const std::string &,unsigned ,double );
	Sales_data();
	Sales_data(const std::string &);
	Sales_data(std::istream&);
	std::string isbn() const;
	Sales_data& combine(const Sales_data&);
private:
	inline double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

inline Sales_data::Sales_data(const std::string &s,unsigned n,double p):
	bookNo(s),units_sold(n),revenue(n*p){
}

inline Sales_data::Sales_data():Sales_data("",0,0.0f){
}

inline Sales_data::Sales_data(const std::string &s):Sales_data(s,0,0.0f){
}

inline Sales_data::Sales_data(std::istream &is):Sales_data(){
	is>>*this;
}

inline std::string Sales_data::isbn() const{
	return bookNo;
}

inline double Sales_data::avg_price() const{
	return units_sold ? revenue/units_sold:0;
}

inline Sales_data& Sales_data::operator+=(const Sales_data &rhs){
	Sales_data old_data(*this);
	*this=old_data+rhs;
	return *this;
}

inline std::istream& operator>>(std::istream &is,Sales_data &item){
	double price=0.0;
	is>>item.bookNo>>item.units_sold>>price;
	if(is)
		item.revenue=price*item.units_sold;
	else
		item=Sales_data();
	return is;
}

inline std::ostream& operator<<(std::ostream &os,const Sales_data &item){
	os<<item.isbn()<<" "<<item.units_sold<<" "
	  <<item.revenue<<" "<<item.avg_price();
	return os;
}

inline Sales_data operator+(const Sales_data &lhs,const Sales_data &rhs){
	Sales_data sum;
	sum.units_sold=lhs.units_sold+rhs.units_sold;
	sum.revenue=lhs.revenue+rhs.revenue;
	return sum;
}
#endif
//这样定义会导致在函数内部总是存在局部变量，会导致性能的下降，但实际上并不需要这样做

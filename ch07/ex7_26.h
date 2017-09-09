 ///
 /// @file    ex_26.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 10:39:50
 ///
#include <iostream>
#include <string>
class Sales_data{
	friend Sales_data add(const Sales_data&,const Sales_data&);
	friend std::istream& read(std::istream&,Sales_data&);
	friend std::ostream& print(std::ostream&,const Sales_data&);
public:
	Sales_data()=default;
	Sales_data(const std::string &s,unsigned n,double p):
		bookNo(s),units_sold(n),revenue(p*n){
	}
	Sales_data(const std::string &s):bookNo(s){
	}
	Sales_data(std::istream&);
	std::string isbn() const{
		return bookNo;
	}
	Sales_data &combine(const Sales_data&);
public:
	inline double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};
inline double Sales_data::avg_price() const{
	return units_sold?revenue/units_sold:0;
}
std::istream& read(std::istream &is,Sales_data &item);
std::ostream& print(std::ostream &os,const Sales_data &item);
Sales_data add(const Sales_data &lhs,const Sales_data &rhs);

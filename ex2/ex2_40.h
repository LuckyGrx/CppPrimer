 ///
 /// @file    ex2_40.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-17 19:53:05
 ///
#include<iostream>
using std::string;
struct Sale_data{
	string bookNo;//图书ISBN编号
	string bookName;//图书名
	unsigned units_sold=0;//销售数量
	double revenue=0.0;//销售收入
	double price=0.0;//单价
};

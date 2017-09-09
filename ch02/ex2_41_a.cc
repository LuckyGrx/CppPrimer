 ///
 /// @file    ex2_41_a.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-02 09:09:57
 ///
#include <iostream>
#include <string>
struct Sales_data{
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

int main(){
	Sales_data book;
	double price;
	while(std::cin>>book.bookNo>>book.units_sold>>price){
		book.revenue=book.units_sold*price;
		std::cout<<book.bookNo<<" "<<book.units_sold<<" "<<book.revenue<<std::endl;
	}
	return 0;
}

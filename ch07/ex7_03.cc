 ///
 /// @file    ex7_03.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-30 10:55:37
 ///
#include "ex7_02.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(){
	Sales_data total;
	std::string bookNo;
	unsigned unitsSold;
	double revenue;
	if (cin >> bookNo >> unitsSold >> revenue) {
		total.setBookNo(bookNo);
		total.setUnitsSold(unitsSold);
		total.setRevenue(revenue);
		Sales_data trans;
		while(cin >> bookNo >> unitsSold >> revenue) {
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				cout << total.getBookNo() << " " << total.getUnitsSold() << " " <<  total.getRevenue() << endl;
				total = trans;
			}
		}
		cout << total.getBookNo() << " " << total.getUnitsSold() << " " << total.getRevenue() << endl;
	}else{
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
 

 ///
 /// @file    ex11_11.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-24 19:08:44
 ///
#include "../ch07/ex7_26.h"
#include <set> 
using std::set;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
	return lhs.isbn() < rhs.isbn();
}

int main() {
	using compareType = bool (*)(const Sales_data&, const Sales_data&);
	std::multiset<Sales_data, compareType> bookstore(compareIsbn);
	return 0;
}

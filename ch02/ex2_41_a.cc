#include <iostream>
#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main() {
	Sales_data book;
	double price;
	std::cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
	std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << std::endl;
	return 0;
}

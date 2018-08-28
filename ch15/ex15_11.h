#ifndef __CP5_EX15_11_H__
#define __CP5_EX15_11_H__

#include <iostream>
#include <string>

class Quote {
public:
	Quote() = default;
	Quote(const std::string &book, double sales_price): bookNo(book), price(sales_price) {
	}
	std::string isbn() const {
		return bookNo;
	}
	virtual double net_price(std::size_t n) const {
		return n * price;
	}
	virtual ~Quote() = default;
    virtual void debug() const {
        std::cout << "bookNo = " << bookNo << std::endl; 
        std::cout << "price = " << price << std::endl; 
    }
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& book, double p, std::size_t qty, double disc): Quote(book, p), min_qty(qty), discount(disc) {
	}
	double net_price(std::size_t cnt) const override {
		if(cnt >= min_qty)
			return cnt * (1 - discount) * price;
		else
			return cnt * price;
	}
    void debug() const override {
        Quote::debug();
        std::cout << "discount = " << discount << std::endl; 
        std::cout << "min_qty = " << min_qty << std::endl; 
    }
protected:
	std::size_t min_qty = 0;
	double discount = 0.0;
};

class Limit_quote : public Bulk_quote {
public:
    Limit_quote() = default;
	Limit_quote(const std::string& book, double p, std::size_t min, std::size_t max, double disc): Bulk_quote(book, p, min, disc), max_qty(max) {
	}
    double net_price(std::size_t cnt) const override {
        if (cnt > max_qty)
            return max_qty * (1 - discount) * price + (cnt - max_qty) * price;
        else if (cnt >= min_qty)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }
    void debug() const override {
        Bulk_quote::debug();
        std::cout << "max_qty = " << max_qty << std::endl; 
    }
private:
    std::size_t max_qty = 0;
};

#endif
#ifndef __CP5_EX15_15_H__
#define __CP5_EX15_15_H__

#include "ex15_03.h"

class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string& book, double price, std::size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) {
    }
    double net_price(std::size_t) const = 0;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double price, std::size_t qty, double disc) : Disc_quote(book, price, qty, disc) {
    }
    double net_price(std::size_t) const override;
};

double Bulk_quote::net_price(std::size_t cnt) const {
        if (cnt > quantity)
            return quantity * (1 - discount) * price + (cnt - quantity) * price;
        else if (cnt >= quantity)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }
#endif
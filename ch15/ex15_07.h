#ifndef __CP5_EX15_07_H__
#define __CP5_EX15_07_H__

#include "ex15_05.h"

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
private:
    std::size_t max_qty = 0;
};

#endif
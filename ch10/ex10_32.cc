 ///
 /// @file    ex10_31.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-25 22:05:09
 ///
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "../include/Sales_item.h"

int main() {
    std::istream_iterator<Sales_item> in_iter(std::cin), in_eof;
    std::vector<Sales_item> vec;
    while (in_iter != in_eof)
	vec.push_back(*in_iter++);
    sort(vec.begin(), vec.end(), 
	[](Sales_item const& lhs, Sales_item const& rhs) {
	    return lhs.isbn() < rhs.isbn();
	});
    for (auto beg = vec.cbegin(), end = beg; beg != vec.cend(); beg = end) {
	end = find_if(beg, vec.cend(), [beg](const Sales_item& item) {
	    return item.isbn() != beg->isbn();
	});
	std::cout << std::accumulate(beg, end, Sales_item(beg->isbn())) << std::endl;
    }
    return 0;
}

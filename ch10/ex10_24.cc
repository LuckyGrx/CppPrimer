 ///
 /// @file    ex10_22.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-11-07 13:30:55
 ///
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::count_if;
using std::bind;
using std::placeholders::_1;

bool check_size(const string &s, string::size_type sz) {
	return s.size() < sz;
}

int main() {
	vector<int> stringLength{1, 2, 1, 1, 2, 2, 4, 4};
	string word = "abc";
	cout << *find_if(stringLength.cbegin(), stringLength.cend(), bind(check_size, word, _1)) << endl;
	return 0;
}


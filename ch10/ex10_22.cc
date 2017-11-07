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
	return s.size() >= sz;
}

int main() {
	vector<string> words{"the", "quick", "red", "fox",
		"jumps", "over", "the", "slow", "red", "turtle"};
	cout << count_if(words.cbegin(), words.cend(), bind(check_size, _1, 6)) << endl;
	return 0;
}


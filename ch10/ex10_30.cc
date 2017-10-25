 ///
 /// @file    ex10_30.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-25 22:05:09
 ///
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using std::istream_iterator;
using std::ostream_iterator;
using std::sort;
using std::copy;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	istream_iterator<int> is_iter(cin), eof;
	ostream_iterator<int> os_iter(cout, " ");
	vector<int> ivec;
	while (is_iter != eof)
		ivec.push_back(*is_iter++);
	sort(ivec.begin(), ivec.end());
	copy(ivec.cbegin(), ivec.cend(), os_iter);
	cout << endl;
	return 0;
}

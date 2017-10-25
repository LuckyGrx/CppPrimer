 ///
 /// @file    ex10_33.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-25 22:32:17
 ///
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;
using std::vector;
using std::copy;

int main() {
	ifstream ifs("../data/ex10_33.txt");
	ofstream ofs1("../data/odd.txt"), ofs2("../data/even.txt");
	istream_iterator<int> in_iter(ifs), eof;
	ostream_iterator<int> out_iter1(ofs1, " "), out_iter2(ofs2, "\n");
	vector<int> ivec;
	while (in_iter != eof)
		ivec.push_back(*in_iter++);

	for (auto iter = ivec.cbegin(); iter != ivec.cend(); ++iter) {
		if (*iter & 1) {
			copy(iter, iter + 1, out_iter1);
		} else {
			copy(iter, iter + 1, out_iter2);
		}
	}
	return 0;
}

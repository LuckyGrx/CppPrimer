 ///
 /// @file    ex10_29.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-25 21:57:18
 ///
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
using std::ifstream;
using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::istream_iterator;

int main() {
	ifstream ifs("../data/letter.txt");
	istream_iterator<string> is_iter(ifs);
	istream_iterator<string> eof;
	vector<string> svec;
	while (is_iter != eof)
		svec.push_back(*is_iter++);
	for (const auto &elem : svec)
		cout << elem << " ";
	cout << endl;
	return 0;
}

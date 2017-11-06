 ///
 /// @file    ex10_27.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-11-06 20:25:25
 ///
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using std::vector;
using std::unique_copy;
using std::list;
using std::back_inserter;
using std::sort;
using std::cout;
using std::endl;

int main() {
	vector<int> ivec{1, 3, 2, 2, 4, 3, 4, 4, 3, 4};
	list<int> ilst;
	sort(ivec.begin(), ivec.end());
	unique_copy(ivec.begin(), ivec.end(), back_inserter(ilst));

	for (const auto &elem : ilst)
		cout << elem << " ";
	cout << endl;
	return 0;
}

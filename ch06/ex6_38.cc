 ///
 /// @file    ex6_38.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-02 19:21:37
 ///
#include <iostream>
using std::cout;
using std::endl;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
decltype(odd)& arrPtr(int i) {
	return (i % 2) ? odd : even;
}

int main() {
	for(const auto &elem :arrPtr(1))
		cout << elem << " ";
	cout << endl;
	for(const auto &elem :arrPtr(2))
		cout << elem << " ";
	cout << endl;
	return 0;
}

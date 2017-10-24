 ///
 /// @file    ex6_11.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 19:23:30
 ///
 
#include <iostream>
using std::cout;
using std::endl;

void reset(int &i) {
	i=0;
}

int main() {
	int i = 1;
	cout << "i = " << i << endl;
	reset(i);
	cout << "i = " << i << endl;
	return 0;
}

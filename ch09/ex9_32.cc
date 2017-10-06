 ///
 /// @file    ex9_32.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-06 18:18:45
 ///
#include <iostream>
#include <vector>
using std::endl;
using std::vector;
using std::cout;

int main() {
	vector<int> vi{1, 2, 3, 4, 5, 6};
	vector<int>::iterator iter = vi.begin();
	iter = vi.insert(iter, *iter++);
	cout << *iter << endl;
	return 0;
}
//该程序虽然是合法的，但是在不同平台下的值却有很大可能不一样，
//因为C++标准规定，函数调用的形参的计算顺序是不确定的

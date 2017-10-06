 ///
 /// @file    ex12_10.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-06 14:39:00
 ///
#include <iostream>
#include <string>
#include <memory>
using std::shared_ptr;
using std::cout;
using std::endl;

void process(shared_ptr<int> ptr) {
	cout << "inside the process function: " << ptr.use_count() << endl;
}

int main() {
	shared_ptr<int> p(new int(42));
	process(shared_ptr<int>(p));

	cout << p.use_count() << endl;
	auto q = p;
	cout << p.use_count() << endl;
	cout << "the int p new points to is :" << *p << endl;
	return 0;
}
//该程序是完全正确的

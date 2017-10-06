 ///
 /// @file    ex12_12.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-06 14:59:42
 ///
#include <iostream>
#include <memory>
using std::cout;
using std::endl;
using std::shared_ptr;
using std::make_shared;

void process(shared_ptr<int> ptr) {
	cout << "inside the process function: " << ptr.use_count() << endl;
}

int main() {
	auto p = new int();
	auto sp = make_shared<int>();
    /*
	 * 这时正确的使用智能指针的例子
	 */
	process(sp);
	/*
	 * 不存在int*到shared_ptr<int>的转换，编译器会报错
	 */
	//process(new int());
	/*
	 * 不存在int*到shared_ptr<int>的转换，编译器会报错
	 */
	//process(p);
    /*
	 * 虽然是合法的，但是最好不要这样子写代码
	 * 比如要是在该段代码后面添加delete p，就会导致double free问题，
	 * 这种问题是不好发现的
	 */
	process(shared_ptr<int>(p));
	return 0;
}

 ///
 /// @file    ex12_11.cc
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
	process(shared_ptr<int>(p.get()));

	return 0;
}
//shared_ptr<int>(p.get())创建了一个临时的智能指针(该指针和智能指针p时独立的，但是
//都指向了同一块堆空间)，process函数结束后，该临时的智能指针会释放该堆空间，从而造成
//main函数结束时，智能指针p造成double free问题(但是我本地测试，居然没出现报错，很奇怪)

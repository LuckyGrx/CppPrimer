 ///
 /// @file    ex12_13.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-06 11:06:57
 ///
#include <iostream>
#include <memory>
using std::make_shared;
using std::shared_ptr;

int main() {
	{
		auto sp = make_shared<int>();
		auto p = sp.get();
		delete p;
	}
	return 0;
}
//显然，这段代码会引起double free问题，因为显示delete掉指针p指向的空间后，在块的作用域结束后，智能指针sp也会释放相同一块内存，从而引起double free问题

 ///
 /// @file    ex9_34.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-02 22:40:17
 ///
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
/*
 *显然，改程序会陷入死循环，因为insert将元素前插，并返回指向插入元素的迭代器，进行自增操作后，还是指向
 *最开始的那个元素，一直循环下去，没有尽头
 */
void originInsert() {
	vector<int> vi{1,2,3,4,5,6,7,8,9,10};
	auto iter = vi.begin();
	while (iter != vi.end())
		if (*iter % 2)
			iter = vi.insert(iter, *iter);
	    ++iter;
	for (const auto &elem : vi)
		cout << elem << " ";
	cout << endl;
}

void rightInsert() {
	vector<int> vi{1,2,3,4,5,6,7,8,9,10};
	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter);
			++iter;
		} 
		++iter;
	}
	for (const auto &elem : vi)
		cout << elem << " ";
	cout << endl;
}

int main() {
	rightInsert();
	originInsert();
	return 0;
}

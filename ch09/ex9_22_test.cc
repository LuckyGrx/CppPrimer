 ///
 /// @file    ex9_22_test.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-02 22:31:24
 ///
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

void insertDoubleElem(vector<int>& iv, const int &some_val) {
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2;
	while (iter != mid) {
		if (*iter == some_val) {
			iter=iv.insert(iter, 2 * some_val);
			++iter;
			mid = iv.begin() + iv.size()/2;
		} 
		++iter;
	}
}

int main() {
	vector<int> ivec{1, 1, 2, 3, 1, 1, 4, 1, 5, 8};
	insertDoubleElem(ivec, 1);
	for(const auto &elem : ivec){
		cout << elem <<" ";
	}
	cout << endl;
	return 0;
}

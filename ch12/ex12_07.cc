 ///
 /// @file    ex12_06.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-05 22:44:30
 ///
#include <iostream>
#include <vector>
#include <memory>
using std::endl;
using std::vector;
using std::cout;
using std::cin;
using std::shared_ptr;
using std::make_shared;

shared_ptr<vector<int>> createVector() {
	shared_ptr<vector<int>> pVec = make_shared<vector<int>>();
	return pVec;
}

shared_ptr<vector<int>> pushElemInVector() {
	shared_ptr<vector<int>>  pRet = createVector();
	int val;
	while(cin >> val)
		pRet->push_back(val);
	return pRet;
}

void showVector() {
	shared_ptr<vector<int>> p = pushElemInVector();
	for (const auto &elem : *p)
		cout << elem <<" ";
	cout << endl;
}

int main() {
	showVector();
	return 0;
}

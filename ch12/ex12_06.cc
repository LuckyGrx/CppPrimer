 ///
 /// @file    ex12_06.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-05 22:44:30
 ///
#include <iostream>
#include <vector>
using std::endl;
using std::vector;
using std::cout;
using std::cin;

vector<int>* createVector() {
	vector<int> *pVec = new vector<int>();
	return pVec;
}

vector<int>* pushElemInVector() {
	vector<int>* pRet = createVector();
	int val;
	while(cin >> val)
		pRet->push_back(val);
	return pRet;
}

void showVector() {
	vector<int>* p = pushElemInVector();
	for (const auto &elem : *p)
		cout << elem <<" ";
	cout << endl;

	delete p;
}

int main() {
	showVector();
	return 0;
}

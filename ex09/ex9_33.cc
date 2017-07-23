 ///
 /// @file    ex9_33.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-23 15:42:24
 ///
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
//运行显示段错误，因为插入元素后，原有的迭代器begin已经失效了，再进行自增操作就不合法了
int main(){
	vector<int> ivec{1,2,3,4,5};
	auto begin=ivec.begin();
	while(begin!=ivec.end()){
		++begin;
		ivec.insert(begin,42);
		++begin;
	}
	for(const auto& elem:ivec){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

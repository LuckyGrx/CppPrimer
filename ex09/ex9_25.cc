 ///
 /// @file    test.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-17 17:05:39
 ///
 
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> ivec{1,2,3,4,5};
	auto iter1=ivec.begin();
	auto iter2=ivec.begin();
	ivec.erase(iter1,iter2);
	for(const auto& elem:ivec)
		cout<<elem<<" ";
	cout<<endl;//根据打印结果可知，elem1和elem2相等时，什么事情都不会干(不删除任何元素)

    //显然，只有elem2是尾后迭代器，则删除迭代器elem1到结尾的所有元素(elem1不是尾后迭代器时)

	iter1=ivec.end();
	iter2=ivec.end();
	ivec.erase(iter1,iter2);
	for(const auto& elem:ivec)
		cout<<elem<<" ";
	cout<<endl;//根据打印结果可知，elem1和elem2都为尾后迭代器时，什么事情都不会干(不删除任何元素)
	return 0;
}

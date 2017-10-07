 ///
 /// @file    ex11_10.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-07 11:49:02
 ///
#include <iostream>
#include <map>
#include <vector>
#include <list>
using std::map;
using std::vector;
using std::list;

int main() {
	/*
	 * 这种定义是合法的，因为vector的迭代器是支持 < 运算符进行比较的
	 */
	map<vector<int>::iterator, int> vim;
	/*
	 * 这种定义是合法的，因为list的迭代器不支持 < 运算符进行比较
	 */
	map<list<int>::iterator, int> lim;
	{
		vector<int> ivec{1, 2, 3, 4};
		vector<int>::iterator iter1 = ivec.begin();
		vector<int>::iterator iter2 = ivec.begin() + 1;
		if( iter1 < iter2) {
		}
	}
	{
		list<int> ilst{1, 2, 3, 4};
		list<int>::iterator iter1 = ilst.begin();
		list<int>::iterator iter2 = ++iter1;
		//if( iter1 < iter2) {//编译报错
		}                   
	}
	return 0;
}

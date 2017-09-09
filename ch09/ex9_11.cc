 ///
 /// @file    ex9_11.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-23 19:47:01
 ///
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
void print(const vector<int>& ivec){
	for(const auto& elem:ivec){
		cout<<elem<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> v1;//默认初始化
	print(v1);
	vector<int> v2={1,2,3};//列表初始化
	print(v2);
	vector<int> v3(v2);//拷贝初始化
	print(v3);
	vector<int> v4=v2;//拷贝初始化
	print(v4);
	vector<int> v5{1,2,3};//列表初始化
	print(v5);
	vector<int> v6(4,1);//拷贝初始化
	print(v6);

	return 0;
}

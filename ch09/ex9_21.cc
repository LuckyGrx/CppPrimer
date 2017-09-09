 ///
 /// @file    ex9_21.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-23 16:08:56
 ///
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
//在循环之前，我们将iter初始化为svec.begin()。第一次调用insert会将我们刚刚读入的
//string插入到iter所指向的元素之前的位置。iter返回的迭代器恰好指向这个新元素。
//我们将此迭代器赋予iter并重复循环，读取下一个单词。只要有单词读入，每步while循环
//就会将一个新元素插入到iter之前，并将iter改变为新加入元素的位置。此元素为(新的)
//首元素。因此，每步循环将一个新元素插入到一个vector元素之前的位置。
int main(){
	vector<string> svec;
	string word;
	auto iter=svec.begin();
	while(cin>>word){
		iter=svec.insert(iter,word);
	}
	for(const auto& elem:svec)
		cout<<elem<<" ";
	cout<<endl;
	return 0;
}

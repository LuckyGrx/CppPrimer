 ///
 /// @file    ex12_26.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-25 10:04:05
 ///
#include <iostream>
#include <memory>
#include <string>
using std::endl;
using std::string;
using std::allocator;
using std::cin;
using std::cout;
const int N=10;
int main(){
	allocator<string> alloc;
	string* const p=alloc.allocate(N);//分配空间
	string s;
	string *q=p;
	while(cin>>s&&q!=p+N){
		alloc.construct(q++,s);//构造对象
	}
	while(q!=p){
		cout<<*--q<<" ";//打印验证结果
		alloc.destroy(q);//析构对象
	}
	cout<<endl;
	alloc.deallocate(p,N);//回收空间
	return 0;
}


 ///
 /// @file    ex9_38.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-25 09:59:59
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> ivec;
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(1);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(2);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(3);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(4);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(5);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(6);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(7);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(8);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	ivec.push_back(9);
	cout<<"ivec: size: "<<ivec.size()<<" capacity: "<<ivec.capacity()<<endl;
	return 0;
}
//根据打印结果，可得以下结论：
//1、默认初始化vector时，size和capacity的大小都为0
//2、若在空的vector中添加元素，size和capacity都增大为1
//3、后面只要size的大小等于capacity的大小，下一次添加元素时，capacity的大小都会增倍

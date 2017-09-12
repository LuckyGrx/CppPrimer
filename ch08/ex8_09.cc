 ///
 /// @file    ex8_01.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-16 20:53:52
 ///
#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::istream;
using std::string;
using std::endl;
using std::istringstream;

istream& func(istream& is){
	string buf;
	while(is>>buf){
		cout<<buf<<endl;
	}
	is.clear();
	return is;
}
int main(){
	istringstream iss("hello,world");
	func(iss);//因为istringstream继承自istream，所以这里可以传入实参iss(多态的使用)
	return 0;
}

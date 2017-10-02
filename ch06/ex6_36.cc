 ///
 /// @file    ex6_36.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-02 18:54:42
 ///
#include <iostream>
#include <string>
using std::endl;
using std::string;
using std::cout;

using strTen=string[10];
string (&func(string (&str)[10]))[10];

int main() {
	string str[10]{"0","1","2","3","4","5","6","7","8","9"}; 
	func(str);
	for (const auto & elem : str)
		cout << elem << " ";
	cout << endl;
	return 0;
}

strTen& func(strTen &str) {
	for (auto &elem : str) {
		elem += "1";
	}
	return str;
}

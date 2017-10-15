 ///
 /// @file    ex6_53.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-15 19:37:38
 ///
#include <iostream>
using std::cout;
using std::endl;

int calc(int&, int&) {
	cout << "int&, int&" << endl;
	return 0;
}

int calc(const int&, const int&) {
	cout << "const int&, const int&" << endl;
	return 0;
}

int calc(char*, char*) {
	cout << "char*, char*" << endl;
	return 0;
}

int calc(const char*, const char*) {
	cout << "const char*, const char*" << endl;
	return 0;
}
/*
 * 编译器报错，definition of 'calc'
 */
/*int calc(char* const, char* const) {
	cout << "char* const, char* const" << endl;
	return 0;
}*/

int main() {
	char *c1 =const_cast<char*>( "first");
	const char *c2 = "second";
	calc(c1, c1);
	calc(c2, c2);
	return 0;
}
//如果两个函数的唯一区别是它的指针形参指向常量或非常量，则编译器通过实参是否是常量决定选用哪个函数:
//如果实参是指向常量的指针，调用形参是const*的函数
//如果实参是指向非常量的指针，调用形参是普通指针的函数

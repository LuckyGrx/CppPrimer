 ///
 /// @file    ex12_23.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-07 19:36:06
 ///
#include <string.h>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
	{
		const char *str1 = "Hello,";
		const char *str2 = "World.";
		char *p = new char[strlen(str1) + strlen(str2) + 1];
		strcpy(p, str1);
		strcat(p, str2);
		cout << p << endl;
		delete [] p;
	}
	{
		string str1 = "Hello,";
		string str2 = "World.";
		char *p = new char[str1.size() + str2.size() +1];
		strcpy(p, str1.c_str());
		strcat(p, str2.c_str());
		cout << p << endl;
		delete [] p;
	}
	return 0;
}

 ///
 /// @file    ex9_14.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-05 10:47:26
 ///
#include <iostream>
#include <list>
#include <string>
#include <vector>
using std::list;
using std::vector;
using std::endl;
using std::cout;
using std::string;

int main(){
	string str1("string1"),str2("string2"),str3("string3");
	list<string> names{str1,str2,str3};
	vector<const char*> oldstyle{"str3","str2","str1"};
	names.assign(oldstyle.cbegin(),oldstyle.cend());
	for(const auto &name:names)
		cout<<name<<" ";
	cout<<endl;
	return 0;
}

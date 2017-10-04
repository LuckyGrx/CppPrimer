 ///
 /// @file    ex9_43.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-04 18:07:38
 ///
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void replaceOldVal(string &str, const string &oldVal, const string &newVal) {
	string::size_type beginIdx = 0;
	while (1) {
		beginIdx = str.find(oldVal, beginIdx);
		if (beginIdx != string::npos) {
			str.erase(beginIdx, oldVal.size());
			str.insert(beginIdx, newVal);
			beginIdx += newVal.size();
		} else
			break;
	}
}

int main() {
	{
		string str{"To drive straight thru is a foolish, tho courageous act."};
		replaceOldVal(str, "thru", "through");
		replaceOldVal(str, "tho", "though");
		cout << str << endl;
	}
	{
		string str{"To drive straight thruthru is a foolish, thotho courageous act."};
		replaceOldVal(str, "thru", "through");
		replaceOldVal(str, "tho", "though");
		cout << str << endl;
	}
	{
		string str{"To drive straight thru is a foolish, tho courageous act."};
		replaceOldVal(str, "thru", "thruthru");
		replaceOldVal(str, "tho", "though");
		cout << str << endl;
	}
	{
		string str{"my world is a big world"};
		replaceOldVal(str, "world", "worldddddddddddddddddddddddddd");
		cout << str << endl;
	}
	return 0;
}

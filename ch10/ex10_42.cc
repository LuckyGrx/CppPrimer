 ///
 /// @file    ex10_42.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-11-06 20:48:24
 ///
#include <iostream>
#include <string>
#include <list>
using std::cout;
using std::endl;
using std::string;
using std::list;

void elimDups(list<string> &words) {
	words.sort();
	words.unique();
}

int main() {
	list<string> words{"the", "quick", "red", "fox", "jumps", 
		"over", "the","slow", "red", "turtle"};
	for (const auto &word : words)
		cout << word << " ";
	cout << endl;

	elimDups(words);

	for (const auto &word : words)
		cout << word << " ";
	cout << endl;
	return 0;
}

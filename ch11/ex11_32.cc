 ///
 /// @file    ex11_32.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-03 20:12:23
 ///
#include <iostream>
#include <string>
#include <set>
#include <map>
using std::endl;
using std::cout;
using std::string;
using std::multimap;
using std::multiset;
using std::map;

int main(){
	multimap<string, string> authors{{"zack", "Best Coder"}, {"LuckyGan", "To be number one"},
		                             {"zack", "LeetCode"}, {"zack", "C++Primer"}};
	map<string, multiset<string>> order_authors;
	for (const auto &author : authors) {
		order_authors[author.first].insert(author.second);
	}
	for (const auto &author : order_authors) {
		cout << author.first << ": ";
		for (const auto &work : author.second) {
			cout << work << " ";
		}
		cout << endl;
	}
	return 0;
}

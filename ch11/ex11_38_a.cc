 ///
 /// @file    ex11_03.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-01 21:48:40
 ///
 
#include <iostream>
#include <unordered_map>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::unordered_map;
using std::string;

int main(){
	unordered_map<string,size_t> word_count;
	string word;
	while (cin >> word) {
	    ++word_count[word];
	}
	for (const auto &w : word_count) {
	    cout << w.first << " occurs " << w.second
		 << ((w.second > 1) ? " times" : " time") << endl;
	}
	return 0;
}

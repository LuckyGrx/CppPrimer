 ///
 /// @file    ex10_20.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-18 12:23:25
 ///
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::count_if;
using std::string;

int main(){
	vector<string> words{"alphabet","luckygan","zack","newbe_gan"};
	cout<<count_if(words.cbegin(),words.cend(),[](const string &word){ return word.size()>=6;})<<endl;
	return 0;
}

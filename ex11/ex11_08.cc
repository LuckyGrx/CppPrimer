 ///
 /// @file    ex11_08.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 08:57:04
 ///
 
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main(){
	vector<string> svec;
	string word;
	while(cin>>word){
		bool isContain=false;
		for(auto& elem:svec){
			if(elem==word){
				isContain=true;
				break;
			}
		}
		if(!isContain){
			svec.push_back(word);
		}
	}
	for(auto& elem:svec){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}
//显然使用vector存储不重复的单词，每次查重的时间复杂度为O(N)
//而使用set来处理的话，查重的时间复杂度为O(logN),关键是set的底层自带处理重复元素的特性，这样代码也更简洁呀

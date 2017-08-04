 ///
 /// @file    ex8_04.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-04 16:52:06
 ///
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::endl;
using std::cout;
using std::ifstream;
using std::vector;
using std::string;

int main(){
	ifstream ifs("../data/ex8_10.data");
	vector<string> words;
	if(ifs){
		string word;
		while(ifs>>word){
			words.push_back(word);
		}
	}
	for(const auto& word:words){
		cout<<word<<endl;
	}
	ifs.close();
	return 0;
}

 ///
 /// @file    ex9_49.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-16 16:06:47
 ///
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::ifstream;
using std::endl;
using std::string;

int main(){
	ifstream ifs("../data/letter.txt");
	if(!ifs){
		cout<<"open file error."<<endl;
		return -1;
	}
	string word,max_word;
	while(ifs>>word){
		if(word.find_first_not_of("aceimnorsuvwxz")==string::npos){//感谢pezy的信息
			if(word.size()>max_word.size())
				max_word=word;
		}
	}
	cout<<max_word<<endl;
	return 0;
}

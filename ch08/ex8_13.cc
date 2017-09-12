 ///
 /// @file    ex8_13.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-12 10:09:45
 ///
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using std::cout;
using std::endl;
using std::istringstream;
using std::ifstream;
using std::vector;
using std::string;
struct PersonInfo{
	string name;
	vector<string> phones;
};

int main(){
	ifstream ifs("test.txt");
	if(!ifs){
		return -1;
	}
	string line,word;
	vector<PersonInfo> people;
	while(getline(ifs,line)){
		PersonInfo info;
		istringstream record(line);
		record>>info.name;
		while(record>>word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	return 0;
}

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
using std::cin;
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
	string line,word;
	vector<PersonInfo> peoples;
	istringstream record;
	while(getline(cin,line)){
		record.clear();
		record.str(line);
		PersonInfo info;
		record>>info.name;
		while(record>>word)
			info.phones.push_back(word);
		peoples.push_back(info);
	}
	cout<<peoples.size()<<endl;
	for(const auto& people:peoples){
		cout<<people.name;
		for(const auto& phone:people.phones){
			cout<<" "<<phone;
		}
		cout<<endl;
	}
	return 0;
}

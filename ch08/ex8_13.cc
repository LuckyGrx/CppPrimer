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
using std::ofstream;
using std::vector;
using std::string;
using std::ostringstream;
using std::cerr;
const int PHONE_NUMBER_SIZE = 11;

struct PersonInfo {
	string name;
	vector<string> phones;
};

bool valid (const string &phonenumber) {
	if (phonenumber.size() != PHONE_NUMBER_SIZE)
		return false;
	for (const auto &phonechar : phonenumber) {
		if (!isdigit(phonechar))
			return false;
	}
	return true;
}

string format(const string &phonenumber) {
	return phonenumber.substr(0, 3) + "-" + phonenumber.substr(3, 4) + "-" + phonenumber.substr(7);
}

int main(){
	ifstream ifs("../data/phonesnumber.txt");
	if (!ifs) {
		cout << "open file failure" << endl;
		return -1;
	}
	ofstream ofs("../data/formatphonesnumber.txt");
	string line, word;
	vector<PersonInfo> people;
	while (getline(ifs, line)) {
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	for (const auto &entry : people) {
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones) {
			if (!valid(nums)) {
				badNums << " " << nums;
			} else
				formatted << " " <<format(nums);
		}
		if (badNums.str().empty())
			ofs << entry.name << " "
				 << formatted.str() << endl;
		else
			cerr << "input error: " <<entry.name
				 << " invalid number(s) " <<badNums.str() << endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}

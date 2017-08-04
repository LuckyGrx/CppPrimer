 ///
 /// @file    ex8_10.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-04 15:01:44
 ///
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::istringstream;
using std::ifstream;
using std::vector;
using std::string;

int main(){
	ifstream ifs("../data/ex8_10.data");
	if(!ifs){
		cout<<"can not find this file."<<endl;
		return -1;
	}
	string line;
	vector<string> svec;
	while(getline(ifs,line)){
		svec.push_back(line);
	}
	for(const auto& elem:svec){
		istringstream iss(elem);
		string word;
		while(iss>>word){
			cout<<word<<endl;
		}
	}
	ifs.close();
	return 0;
}

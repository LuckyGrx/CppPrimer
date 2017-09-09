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
	vector<string> vecLine;
	if(ifs){
		string line;
		while(getline(ifs,line)){
			vecLine.push_back(line);
		}
	}
	for(const auto& line:vecLine){
		cout<<line<<endl;
	}
	ifs.close();
	return 0;
}

 ///
 /// @file    ex9_50.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-24 17:23:25
 ///
 
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
	vector<string> vecString{"1","2","3","4","5"};
	int sumInt=0;
	for(auto& elem:vecString){
		sumInt+=stoi(elem);
	}
	cout<<"sum of Int is "<<sumInt<<endl;
	double sumDouble=0.0;
	for(auto& elem:vecString){
		sumDouble+=stod(elem);
	}
	cout<<"sum of Double is "<<sumDouble<<endl;
	return 0;
}

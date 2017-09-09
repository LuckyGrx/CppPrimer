 ///
 /// @file    ex3_14.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-29 20:45:01
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
	string tmp;
	vector<string> ivec;
	while(cin>>tmp){
		ivec.push_back(tmp);
	}
	for(auto& elem:ivec){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

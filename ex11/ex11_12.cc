 ///
 /// @file    ex11_12.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 09:40:58
 ///
 
#include <iostream>
#include <string>
#include <vector>
#include <utility>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::pair;

int main(){
	vector<pair<string,int>> pvec;
	pair<string,int> sip;
	while(cin>>sip.first>>sip.second){
		pvec.push_back(sip);
	}
	for(auto& elem:pvec){
		cout<<elem.first<<" "<<elem.second<<endl;
	}
	return 0;
}

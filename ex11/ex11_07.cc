 ///
 /// @file    ex11_07.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 08:44:55
 ///
 
#include <iostream>
#include <string>
#include <map>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::vector;

int main(){
	map<string,vector<string>> svsmap;
	string family_name;
	while(cout<<"please input family's name: ",cin>>family_name){
		string child_name;
		cout<<"please input child's name: ";
		while(cin>>child_name){
			svsmap[family_name].push_back(child_name);
		}
	}
	for(auto& svs:svsmap){
		cout<<svs.first<<":";
		for(auto& child:svs.second){
			cout<<child<<" ";
		}
		cout<<endl;
	}
	return 0;
}

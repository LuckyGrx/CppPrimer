 ///
 /// @file    ex11_07.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 08:44:55
 ///
 
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::vector;
using std::pair;

int main(){
	map<string,vector<pair<string,string>>> svsmap;
	string family_name;
	while(cout<<"please input family's name: ",cin>>family_name){
		string child_name;
		string child_birthday;
		cout<<"please input child's name and birthday: ";
		while(cin>>child_name>>child_birthday){
			svsmap[family_name].push_back({child_name,child_birthday});
		}
	}
	for(auto& svs:svsmap){
		cout<<svs.first<<":";
		for(auto& child:svs.second){
			cout<<child.first<<" "<<child.second<<endl;
		}
		cout<<endl;
	}
	return 0;
}

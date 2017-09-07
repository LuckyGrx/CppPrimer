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
using std::multimap;
using std::string;
using std::vector;

int main(){
	multimap<string,string> families;
	string family_name;
	while(cout<<"please input family's name: ",cin>>family_name){
		string child_name;
		cout<<"please input child's name: ";
		cin>>child_name;
		families.insert({family_name,child_name});
	}
	for(const auto &s:families){
		cout<<s.first<<" "<<s.second<<endl;
	}
	return 0;
}

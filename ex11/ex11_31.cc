 ///
 /// @file    ex11_31.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-03 20:12:23
 ///
#include <iostream>
#include <string>
#include <map>
using std::endl;
using std::cout;
using std::string;
using std::multimap;

int main(){
	multimap<string,string> authors{{"zack","Best Coder"},{"LuckyGan","To be number one"},
		                            {"zack","C++Primer"}};
	string author="zack";
	string work="C++Primer";
	auto found=authors.find(author);
	auto count=authors.count(author);
	while(count--){
		if(found->second==work){
			authors.erase(found);
			break;
		}
		++found;
	}
	for(const auto& author:authors){
		cout<<author.first<<" "<<author.second<<endl;
	}
	return 0;
}

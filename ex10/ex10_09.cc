 ///
 /// @file    ex10_09.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-22 16:19:32
 ///

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cout;
using std::string;
using std::vector;
using std::endl;
using std::unique;
using std::sort;
void elimDups(vector<string>& words){
	sort(words.begin(),words.end());
	auto end_unique=unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}
int main(){
	vector<string> svec{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	cout<<"before elimate duplicate elements:"<<endl;
	for(const auto& elem:svec){
		cout<<elem<<" ";
	}
	cout<<endl;
	elimDups(svec);
	cout<<"after elimate duplicate elements:"<<endl;
	for(const auto& elem:svec){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

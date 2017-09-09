 ///
 /// @file    ex10_13.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-31 15:41:16
 ///
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using std::string;
using std::endl;
using std::vector;
using std::cout;
bool isBigFive(const string &s){
	return s.size()>=5;
}
int main(){
	vector<string> words{"1","2","11","222","33333","444444","123456","222222"};
	auto iter=partition(words.begin(),words.end(),isBigFive);
	for(auto it=words.begin();it!=iter;++it)
		cout<<*it<<endl;
	return 0;
}

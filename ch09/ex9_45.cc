 ///
 /// @file    ex9_45.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-15 20:19:04
 ///
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;

string add_prefix_suffix(string str,string prefix,string suffix){
	str.insert(str.begin(),prefix.begin(),prefix.end());
	str.append(suffix.begin(),suffix.end());
	return str;
}
int main(){
	string str,prefix,suffix;
	while(cin>>str>>prefix>>suffix){
		cout<<add_prefix_suffix(str,prefix,suffix)<<endl;
	}
	return 0;
}

 ///
 /// @file    ex3_11.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-01 20:40:48
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	const string s="Keep out!";
	for(auto& c:s){//该语句合法，c的类型为const char&
		//c='x';//非法操作
		//cout<<c;
	}
	return 0;
}

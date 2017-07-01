 ///
 /// @file    ex3_09.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-01 20:06:37
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main(){
	string s;
	cout<<s[0]<<endl;//该程序是不合法的，下标的值只能在[0,s.size()-1]之间，显然现在s.size()为0，
	return 0;//所以打印结果是未定义的
}

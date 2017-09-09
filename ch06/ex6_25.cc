 ///
 /// @file    ex6_25.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 19:56:44
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main(int argc,char** argv){
	if(argc!=3){
		cout<<"args error!"<<endl;
		return -1;
	}
	string s(argv[1]);
	s+=argv[2];
	cout<<s<<endl;
	return 0;
}

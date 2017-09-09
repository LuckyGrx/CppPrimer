 ///
 /// @file    ex4_22.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-08 20:49:41
 ///
 
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){//显然，用多个if的版本，程序可读性更好
	int grade;
	while(cin>>grade){
		string finalgrade;
		if(grade>90)
			finalgrade="high pass";
		else if(grade<60)
			finalgrade="fail";
		else if(grade<75)
			finalgrade="low pass";
		else
			finalgrade="pass";
		cout<<finalgrade<<endl;
	}
	return 0;
}

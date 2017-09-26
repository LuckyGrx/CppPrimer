 ///
 /// @file    test.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-26 16:28:12
 ///
#include <iostream>
using namespace std;

int main(){
	int grade;
	while(cin>>grade){
		string finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
	}
	return 0;
}

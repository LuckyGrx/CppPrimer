 ///
 /// @file    ex5_05.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-10 22:08:23
 ///
 
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::cin;
using std::vector;
using std::cout;
using std::endl;

int main(){
	const vector<string> scores{"F","D","C","B","A","A++"};
	int grade;
	string lettergrade;
	while(cin>>grade){
		lettergrade=(grade<60)?scores[0]:scores[(grade-50)/10];
		lettergrade+=(grade!=100&&grade%10>7)?"+":(grade!=100&&grade%10<3)?"-":"";
		cout<<"This grade is "<<lettergrade<<endl;
	}
	return 0;
}

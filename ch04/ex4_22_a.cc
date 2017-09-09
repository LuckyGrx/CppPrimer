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

int main(){
	int grade;
	while(cin>>grade){
		string finalgrade=(grade>90)?"high pass":
				          (grade<60)?"fail":
						  (grade<75)?"low pass":"pass";
		cout<<finalgrade<<endl;
	}
	return 0;
}

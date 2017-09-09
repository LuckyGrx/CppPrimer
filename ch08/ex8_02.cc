 ///
 /// @file    ex8_02.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-04 18:40:10
 ///
#include <iostream>
#include <string>
using std::cout;
using std::istream;
using std::cin;
using std::endl;
using std::string;

void testCin(istream& is){
	string str;
	is>>str;
	cout<<str<<endl;
}
int main(){
	testCin(cin);
	return 0;
}

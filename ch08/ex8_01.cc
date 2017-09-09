 ///
 /// @file    ex8_01.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-16 20:53:52
 ///
#include <iostream>
#include <string>
using std::cout;
using std::istream;
using std::string;
using std::endl;

istream& func(istream& is){
	string buf;
	while(is>>buf){
		cout<<buf<<endl;
	}
	is.clear();
	return is;
}
int main(){
	func(std::cin);
	return 0;
}

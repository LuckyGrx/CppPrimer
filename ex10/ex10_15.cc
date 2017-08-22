 ///
 /// @file    ex10_15.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-22 21:00:41
 ///
#include <iostream>
using std::cout;
using std::endl;
int main(){
	int a=1,b=2;
	auto add=[b](int a){return a+b;};
	cout<<add(a)<<endl;
	return 0;
}

 ///
 /// @file    ex10_14.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-22 20:53:43
 ///
#include <iostream>
using std::cout;
using std::endl;
auto add=[](int lhs,int rhs){return lhs+rhs;};

int main(){
	int a=1,b=2;
	cout<<add(a,b)<<endl;
	return 0;
}

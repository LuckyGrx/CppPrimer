 ///
 /// @file    ex6_21.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 09:35:54
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int compare(const int a,const int* const b){
	return a>*b?a:*b;
}

int main(){
	int a=6;
	cout<<compare(7,&a)<<endl;
	return 0;
}

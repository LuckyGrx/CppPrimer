 ///
 /// @file    ex6_09.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-09 11:09:51
 ///
#include "Chapter6.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int val;
	while(cout<<"please input a number:",cin>>val){
		cout<<"this number's fact is "<<fact(val)<<endl;
	}
	return 0;
}

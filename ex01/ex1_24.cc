 ///
 /// @file    ex1_23.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-05 19:48:17
 ///
#include "Sales_item.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	Sales_item curItem,valItem;
	if(cin>>curItem){
		int cnt=1;
		while(cin>>valItem){
			if(curItem.isbn()==valItem.isbn())
				++cnt;
			else{
				cout<<curItem<<" occurs "<<cnt<<" times "<<endl;
				curItem=valItem;
				cnt=1;
			}
		}
		cout<<curItem<<" occurs "<<cnt<<" times "<<endl;
	}
	return 0;
}

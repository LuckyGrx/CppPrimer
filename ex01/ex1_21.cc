 ///
 /// @file    ex1_21.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 16:10:26
 ///
#include "Sales_item.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	Sales_item item1,item2;
	cin>>item1>>item2;
	if(item1.isbn()==item2.isbn()){
		cout<<item1+item2<<endl;
	}else{
		cout<<"Data must refer to same ISBN"<<endl;
	}
	return 0;
}

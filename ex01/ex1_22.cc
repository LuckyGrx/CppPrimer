 ///
 /// @file    ex1_22.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-04 18:44:49
 ///
#include "Sales_item.h" 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(){
	Sales_item total;
	if(cin>>total){
		Sales_item trans;
		while(cin>>trans){
			if(total.isbn()==trans.isbn())
				total+=trans;
			else{
				cout<<total<<endl;
				total=trans;
			}
			cout<<total<<endl;
		}
	}else{
		cerr<<"No data?!"<<endl;
		return -1;
	}
	return 0;
}

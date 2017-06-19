 ///
 /// @file    ex3_35.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-18 15:36:24
 ///
 
#include <iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(){
	int array[6]={0,1,2,3,4,5};
	auto beg1=begin(array);
	auto beg2=beg1;
	auto last=end(array);
	while(beg1!=last){
		*beg1=0;
		++beg1;
	}
	while(beg2!=last){
		cout<<*beg2<<" ";
		++beg2;
	}
	cout<<endl;
	return 0;
}

 ///
 /// @file    ex6_10.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 18:59:03
 ///
 
#include <iostream>
using std::cout;
using std::endl;
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a=0,b=1;
	cout<<"a= "<<a<<","<<"b= "<<b<<endl;
	swap(&a,&b);
	cout<<"a= "<<a<<","<<"b= "<<b<<endl;

	return 0;
}

 ///
 /// @file    ex1_11.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-22 17:20:38
 ///
 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	cout<<"Enter two numbers:"<<endl;
	int v1=0,v2=0;
	cin>>v1>>v2;
	if(v1>v2){
		while(v2<=v1){
			cout<<v2<<endl;
			++v2;
		}
	}else{
		while(v1<=v2){
			cout<<v1<<endl;
			++v1;
		}
	}
}

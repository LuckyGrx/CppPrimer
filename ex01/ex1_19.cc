 ///
 /// @file    ex1_19.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-22 17:20:38
 ///
 
#include <iostream>

int main(){
	std::cout<<"Enter two numbers:"<<std::endl;
	int v1=0,v2=0;
	std::cin>>v1>>v2;
	if(v1>v2){
		while(v2<=v1){
			std::cout<<v2<<std::endl;
			++v2;
		}
	}else{
		while(v1<=v2){
			std::cout<<v1<<std::endl;
			++v1;
		}
	}
}

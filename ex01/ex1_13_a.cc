 ///
 /// @file    ex1_09.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-22 17:13:48
 ///
 
#include <iostream>

int main(){
	int sum=0;
	for(int val=50;val<=100;++val){
		sum+=val;
	}
	std::cout<<"Sum of 50 to 100 inclusive is "
		     <<sum<<std::endl;
	return 0;
}
//output:Sum of 50 to 100 inclusive is 3825

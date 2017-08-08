 ///
 /// @file    ex2_04.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-07 10:55:58
 ///
 
#include <iostream>

int main(){
	unsigned u=10,u2=42;
	std::cout<<u2-u<<std::endl;//32
	std::cout<<u-u2<<std::endl;//4294967264

	int i=10,i2=42;
	std::cout<<i2-i<<std::endl;//32
	std::cout<<i-i2<<std::endl;//-32
	std::cout<<i-u<<std::endl;//0
	std::cout<<u-i<<std::endl;//0
	return 0;
}

 ///
 /// @file    ex8_06.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-10 21:31:13
 ///
#include "../ch07/ex7_26.h" 
#include <fstream>
#include <iostream>

int main(int argc,char* argv[]){
	if(argc!=2){
		std::cout<<"args error!"<<std::endl;
		return -1;
	}
	std::ifstream ifs(argv[1]);
	if(ifs){
		std::cout<<"This file not exist."<<std::endl;
		return -1;
	}
	Sales_data total;
	if(read(ifs,total)){
		Sales_data trans;
		while(read(ifs,trans)){
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				print(std::cout,total)<<std::endl;
				total=trans;
			}
		}
		print(std::cout,total)<<std::endl;
	}else{
		std::cerr<<"No data?"<<std::endl;
	}
	return 0;
}

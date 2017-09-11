 ///
 /// @file    ex8_06.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-10 21:31:13
 ///
#include "../ch07/ex7_26.h" 
#include <fstream>
#include <iostream>

int main(int argc,char* argv[]){
	if(argc!=3){
		std::cout<<"args error!"<<std::endl;
		return -1;
	}
	std::ifstream ifs(argv[1]);
	if(ifs){
		std::cout<<"input file not exist."<<std::endl;
		return -1;
	}
	std::ofstream ofs(argv[2]);
	if(ofs){
		std::cout<<"output file create error."<<std::endl;
		return -1;
	}
	Sales_data total;
	if(read(ifs,total)){
		Sales_data trans;
		while(read(ifs,trans)){
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				print(ofs,total)<<std::endl;
				total=trans;
			}
		}
		print(ofs,total)<<std::endl;
	}else{
		std::cerr<<"No data?"<<std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}

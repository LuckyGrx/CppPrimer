 ///
 /// @file    ex14_35.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-22 10:15:09
 ///
#ifndef __CP5_EX14_33_H__
#define __CP5_EX14_33_H__
#include <iostream>
#include <string>
#include <vector>

class PrintString{
public:
	PrintString(std::istream& is=std::cin):_is(is){
	}	
    std::string operator()() const{
		std::string str;
		std::getline(_is,str);
	    return _is?str:std::string();
	}
private:
	std::istream& _is;
};
#endif

int main(){
	std::vector<std::string> svec;
	std::string str;
	PrintString printer;
	while(!(str=printer()).empty())
		svec.push_back(str);
	for(const auto& str:svec)
		std::cout<<str<<" ";
	std::cout<<std::endl;
	return 0;
}

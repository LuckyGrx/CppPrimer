 ///
 /// @file    ex13_05.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-23 17:11:55
 ///
#include <string>

class HasPtr{
public:
	HasPtr(const std::string& s=std::string())
	:ps(new std::string(s))
	,i(0){
	}
	HasPtr(const HasPtr& hasPtr)
	:ps(new std::string(*hasPtr.ps))
	,i(hasPtr.i){
	}
private:
	std::string* ps;
	int i;
};

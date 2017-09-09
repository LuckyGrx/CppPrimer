 ///
 /// @file    ex13_22.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-07 12:26:06
 ///
#ifndef __CP5_EX13_22_H__
#define __CP5_EX13_22_H__
#include <string>

class HasPtr{
public:
	HasPtr(const std::string&);
	HasPtr(const HasPtr&);
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
private:
	std::string *ps;
	int i;
};

HasPtr::HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){//g++编译器不支持这种写法，可以将定义放入类的内部可以修复这个错误
}

HasPtr::HasPtr(const HasPtr &p):ps(new std::string(*p.ps)),i(p.i){
}

HasPtr& HasPtr::operator=(const HasPtr& rhs){
	std::string *newp=new std::string(*rhs.ps);
	delete ps;
	ps=newp;
	i=rhs.i;
	return *this;
}

HasPtr::~HasPtr(){
	delete ps;
}
#endif

 ///
 /// @file    ex13_27.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-07 09:05:36
 ///
#ifndef __CP5_EX13_27_H__
#define __CP5_EX13_27_H__
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
	std::size_t *use;
};
inline HasPtr::HasPtr(const std::string &s=std::string()):		
	ps(new std::string(s)),i(0),use(new std::size_t(1)){}

inline HasPtr::HasPtr(const HasPtr &p):
	ps(p.ps),i(p.i),use(p.use){
		++*use;
}

inline HasPtr& HasPtr::operator=(const HasPtr &rhs){
	++*rhs.use;
	if(0==--*use){
		delete ps;
		delete use;
	}
	ps=rhs.ps;
	i=rhs.i;
	use=rhs.use;
	return *this;
}

inline HasPtr::~HasPtr(){
	if(0==--*use){
		delete ps;
		delete use;
	}
}
#endif

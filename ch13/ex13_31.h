 ///
 /// @file    ex13_22.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-07 12:26:06
 ///
#ifndef __CP5_EX13_30_H__
#define __CP5_EX13_30_H__
#include <iostream>
#include <string>

class HasPtr{
	friend void swap(HasPtr&,HasPtr&);
	friend bool operator<(const HasPtr &lhs,const HasPtr &rhs);
public:
	HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){
	}
	HasPtr(const HasPtr&);
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
	void show() const;
private:
	std::string *ps;
	int i;
};

inline void swap(HasPtr &lhs,HasPtr &rhs){
	std::swap(lhs.ps,rhs.ps);
	std::swap(lhs.i,rhs.i);
	std::cout<<"swap(HasPtr&,HasPtr&)"<<std::endl;
}

inline HasPtr::HasPtr(const HasPtr &p):ps(new std::string(*p.ps)),i(p.i){
}

inline HasPtr& HasPtr::operator=(const HasPtr& rhs){
	std::string *newp=new std::string(*rhs.ps);
	delete ps;
	ps=newp;
	i=rhs.i;
	return *this;
}

inline HasPtr::~HasPtr(){
	delete ps;
}

inline void HasPtr::show() const{
	std::cout<<*ps<<std::endl;
}

inline bool operator<(const HasPtr &lhs,const HasPtr &rhs){
	return *lhs.ps<*rhs.ps;
}
#endif

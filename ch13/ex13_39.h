 ///
 /// @file    ex13_39.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-24 21:18:20
 ///
#ifndef __EX13_38_H__
#define __EX13_38_H__
#include <iostream>
class StrVec{
public:
	StrVec();
	StrVec(const StrVec&);
	StrVec& operator=(const StrVec&);
	~StrVec();
	void push_back(const std::string&);
	size_t size()const;
	size_t capacity()const;
	std::string* begin()const;
	std::string* end()const;
private:
	static std::allocator<std::string> alloc;
	void chk_n_alloc();
	std::pair<std::string*,std::string*> alloc_n_copy(const std::string*,const std::string*);
	void free();
	void reallocate();
	std::string* elements;
	std::string* first_free;
	std::string* cap;
};
#endif

 ///
 /// @file    ex13_44.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-06 20:57:52
 ///
#ifndef __CP5_EX13_44_H__
#define __CP5_EX13_44_H__
#include <memory>

class String{
public:
	String();
	String(const char*);
	String(const String&);
	String& operator=(const String&);
	~String();
	const char* c_str() const;
private:
	char* elements;
	char* end;
	std::allocator<char> alloc;
};
#endif

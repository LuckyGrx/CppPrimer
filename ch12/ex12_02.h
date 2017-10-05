 ///
 /// @file    ex12_02.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-02 12:32:55
 ///
#ifndef __CP5_EX12_02_H__
#define __CP5_EX12_02_H__
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using std::string;
using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::initializer_list;

class StrBlob{
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string>);
	size_type size() const;
	bool empty() const;
	void push_back(const string&);
	void pop_back();
	string& front();
	string& back();
	string& front() const;
	string& back() const;
private:
	void check(size_type i,const string &msg) const;
private:
	shared_ptr<vector<string>> data;
};

inline StrBlob::StrBlob():data(make_shared<vector<string>>()) {
}

inline StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)) {
}

inline void StrBlob::check(size_type i,const string &msg) const {
	if(i >= data->size())
		throw std::out_of_range(msg);
}

inline string& StrBlob::front() {
	check(0,"front of empty StrBlob");
	return data->front();
}

inline string& StrBlob::back() {
	check(0,"back on empty StrBlob");
	return data->back();
}

inline string& StrBlob::front() const {
	check(0,"front of empty StrBlob");
	return data->front();
}

inline string& StrBlob::back() const {
	check(0,"back on empty StrBlob");
	return data->back();
}

inline void StrBlob::push_back(const string &t) {
	data->push_back(t);
}

inline void StrBlob::pop_back() {
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}

#endif

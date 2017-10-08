 ///
 /// @file    ex12_19.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-08 21:52:29
 ///
#ifndef __CP5_EX12_19_H__
#define __CP5_EX12_19_H__
#include <iostream>
#include <memory>
#include <vector>
#include <string>
using std::vector;
using std::shared_ptr;
using std::weak_ptr;
using std::string;
using std::out_of_range;
using std::runtime_error;
using std::size_t;
using std::make_shared;
using std::initializer_list;

class StrBlobPtr;

class StrBlob{
	friend class StrBlobPtr;
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
	StrBlobPtr begin();
	StrBlobPtr end();
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


class StrBlobPtr {
public:
	StrBlobPtr();
	StrBlobPtr(StrBlob&, size_t);
	string& deref() const;
	StrBlobPtr& incr();
private:
	shared_ptr<vector<string>> check(size_t, const string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

inline StrBlobPtr::StrBlobPtr(): curr(0) {
}

inline StrBlobPtr::StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {
}

inline shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const {
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}

inline string& StrBlobPtr::deref() const {
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

inline StrBlobPtr& StrBlobPtr::incr() {
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}

inline StrBlobPtr StrBlob::begin() {
	return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end() {
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

#endif

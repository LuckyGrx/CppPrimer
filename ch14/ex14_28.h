#ifndef __CP5_EX14_28_H__
#define __CP5_EX14_28_H__

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
	StrBlobPtr begin();
	StrBlobPtr end();
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


class StrBlobPtr {
	friend bool operator==(const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator!=(const StrBlobPtr&, const StrBlobPtr&);
    friend bool operator<(const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator<=(const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator>(const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator>=(const StrBlobPtr&, const StrBlobPtr&);
public:
	StrBlobPtr();
	StrBlobPtr(StrBlob&, size_t);
	string& deref() const;
	StrBlobPtr& incr();
	string& operator[](size_t idx);
	const string& operator[](size_t idx) const;
	StrBlobPtr& operator++();
	StrBlobPtr operator++(int);
	StrBlobPtr& operator--();
	StrBlobPtr operator--(int);
	StrBlobPtr operator+(size_t) const;
	StrBlobPtr operator-(size_t) const;
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

inline bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
	return lhs.curr == rhs.curr;
}

inline bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
	return !(lhs == rhs);
}

inline bool operator<(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
	return lhs.curr < rhs.curr;
}

inline bool operator<=(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
	return !(lhs > rhs);
}

inline bool operator>(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
	return rhs < lhs;
}

inline bool operator>=(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
	return !(lhs < rhs);
}

inline string& StrBlobPtr::operator[](size_t idx) {
    auto p = check(idx, "out of range");
	return (*p)[idx];
}

inline const string& StrBlobPtr::operator[](size_t idx) const {
    auto p = check(idx, "out of range");
	return (*p)[idx];
}

inline StrBlobPtr& StrBlobPtr::operator++() {
    check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}

inline StrBlobPtr StrBlobPtr::operator++(int) {
    StrBlobPtr ret = *this;
	++*this;
	return ret;
}

inline StrBlobPtr& StrBlobPtr::operator--() {
	--curr;
    check(curr, "decrement past begin of StrBlobPtr");
	return *this;
}

inline StrBlobPtr StrBlobPtr::operator--(int) {
    StrBlobPtr ret = *this;
	--*this;
	return ret;
}

inline StrBlobPtr StrBlobPtr::operator+(size_t idx) const {
	StrBlobPtr ret = *this;
	ret.curr += idx;
	check(ret.curr, "increment past end of StrBlobPtr");
	return ret;
}

inline StrBlobPtr StrBlobPtr::operator-(size_t idx) const {
    StrBlobPtr ret = *this;
	ret.curr -= idx;
	check(ret.curr, "decrement past begin of StrBlobPtr");
	return ret;	
}

inline StrBlobPtr StrBlob::begin() {
	return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end() {
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

#endif

#ifndef __CP5_EX14_26_STRBLOB_H__
#define __CP5_EX14_26_STRBLOB_H__

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
	friend bool operator==(const StrBlob&, const StrBlob&);
	friend bool operator!=(const StrBlob&, const StrBlob&);
	friend bool operator<(const StrBlob&, const StrBlob&);
	friend bool operator<=(const StrBlob&, const StrBlob&);
	friend bool operator>(const StrBlob&, const StrBlob&);
	friend bool operator>=(const StrBlob&, const StrBlob&);
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
	string& operator[](size_t idx);
	const string& operator[](size_t idx) const;
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

inline bool operator==(const StrBlob &lhs, const StrBlob &rhs) {
	return *lhs.data == *rhs.data;
}

inline bool operator!=(const StrBlob &lhs, const StrBlob &rhs) {
	return !(lhs == rhs);
}

inline bool operator<(const StrBlob &lhs, const StrBlob &rhs) {
	return *lhs.data < *rhs.data;
}

inline bool operator<=(const StrBlob &lhs, const StrBlob &rhs) {
	return !(lhs > rhs);
}

inline bool operator>(const StrBlob &lhs, const StrBlob &rhs) {
	return rhs < lhs;
}

inline bool operator>=(const StrBlob &lhs, const StrBlob &rhs) {
	return !(lhs < rhs);
}

inline string& StrBlob::operator[](size_t idx) {
	check(idx, "out of range");
	return (*data)[idx];
}

inline const string& StrBlob::operator[](size_t idx) const {
    check(idx, "out of range");
	return (*data)[idx];	
}

#endif

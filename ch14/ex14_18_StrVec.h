 ///
 /// @file    ex14_18_StrVec.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-24 21:18:20
 ///

#ifndef __EX14_18_StrVec_H__
#define __EX14_18_StrVec_H__
#include <iostream>
#include <string>
#include <memory>
#include <initializer_list>
using std::string;
using std::pair;
using std::allocator;
using std::initializer_list;

class StrVec {
	friend bool operator==(const StrVec&, const StrVec&);
	friend bool operator!=(const StrVec&, const StrVec&);
	friend bool operator<(const StrVec&, const StrVec&);
	friend bool operator<=(const StrVec&, const StrVec&);
	friend bool operator>(const StrVec&, const StrVec&);
	friend bool operator>=(const StrVec&, const StrVec&);
public:
	StrVec();
	StrVec(const StrVec&);
	StrVec(initializer_list<string>);
	StrVec& operator=(const StrVec&);
	~StrVec();
	void push_back(const string&);
	size_t size() const;
	size_t capacity() const;
	std::string* begin() const;
	std::string* end() const;
	void alloc_n_move(size_t);
	void reserve(size_t);
	void resize(size_t);
private:
	static allocator<string> alloc;
	void chk_n_alloc();
	std::pair<string*, std::string*> alloc_n_copy(const string*, const string*);
	void free();
	void reallocate();
	std::string* elements;
	std::string* first_free;
	std::string* cap;
};

StrVec::StrVec():elements(nullptr), first_free(nullptr), cap(nullptr) {
}

StrVec::StrVec(const StrVec &s) {
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = newdata.second;
}

StrVec::StrVec(initializer_list<string> il) {
	auto newdata = alloc_n_copy(il.begin(), il.end());
	elements = newdata.first;
	first_free = newdata.second;
}

StrVec& StrVec::operator=(const StrVec &rhs) {
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

StrVec::~StrVec() {
	free();
}

void StrVec::push_back(const string &s) {
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

size_t StrVec::size() const {
	return first_free - elements;
}

size_t StrVec::capacity() const {
	return cap - elements;
}

std::string* StrVec::begin() const {
	return elements;
}

std::string* StrVec::end() const {
	return first_free;
}

void StrVec::chk_n_alloc() {
	if (size() == capacity())
		reallocate();
}

pair<string*, string*> StrVec::alloc_n_copy(const string *begin, const string *end) {
	auto data = alloc.allocate(end - begin);
	return {data, uninitialized_copy(begin, end, data)};
}

void StrVec::free() {
	if (elements) {
		for (auto p = first_free; p != elements; )
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

void StrVec::reallocate() {
	auto newcapacity = size() ? 2 * size(): 1;
	alloc_n_move(newcapacity);
}

void StrVec::alloc_n_move(size_t new_cap) {
	auto newdata = alloc.allocate(new_cap);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + new_cap;
}

void StrVec::reserve(size_t new_cap) {
	if(new_cap > capacity())
		alloc_n_move(new_cap);
}

void StrVec::resize(size_t count) {
	if (count > capacity()){//大于当前容量，则重新分配空间
		reserve(count * 2);
	} else if(count > size()){//大于当前大小，则扩展多余的元素数量
		for(size_t i = size(); i != count; ++i) {
			alloc.construct(first_free++, string());
		}
	} else {//小于当前大小，更改容量以及大小，移除多余元素并销毁(但并没有将这段内存返回给操作系统，即容量不变)
		for (auto p = elements + count; p != first_free; p++)
			alloc.destroy(p);
		first_free = elements + count;
	}
}

bool operator==(const StrVec &lhs, const StrVec &rhs) {
	if (lhs.size() == rhs.size()) {
		for (auto pl = lhs.begin(), pr = rhs.begin(); pl != lhs.end() && pr != rhs.end(); ++pl, ++pr) {
			if ( *pl != *pr)
				return false;
		}
		return true;
	} else
		return false;
}

bool operator!=(const StrVec &lhs, const StrVec &rhs) {
	return !(lhs == rhs);
}

bool operator<(const StrVec &lhs, const StrVec &rhs) {
	size_t minSize = lhs.size() > rhs.size() ? rhs.size(): lhs.size();
	auto pl = lhs.begin(), pr = rhs.begin();
	while (minSize--) {
		if (*pl < *pr)
			return true;
		else if (*pl > *pr)
			return false;
		++pl, ++pr;
	}
	if ( lhs.size() < rhs.size())
		return true;
	else
		return false;
}

bool operator<=(const StrVec &lhs, const StrVec &rhs) {
	return !(lhs > rhs); 
}

bool operator>(const StrVec &lhs, const StrVec &rhs) {
	return rhs < lhs;

}

bool operator>=(const StrVec &lhs, const StrVec &rhs) {
	return !(lhs < rhs);
}

#endif

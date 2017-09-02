 ///
 /// @file    ex12_02.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-02 12:32:55
 ///
#include <iostream>
#include <string>
#include <vector>
#include <memory>
class StrBlob{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string>);
	size_type size() const;
	bool empty() const;
	void push_back(const std::string&);
	void pop_back();
	std::string& front();
	std::string& back();
	std::string& front() const;
	std::string& back() const;
private:
	void check(size_type i,const std::string &msg) const;
private:
	std::shared_ptr<std::vector<std::string>> data;
};

inline StrBlob::StrBlob():data(std::make_shared<std::vector<std::string>>()){
}

inline StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){
}

inline void StrBlob::check(size_type i,const std::string &msg) const{
	if(i>=data->size())
		throw std::out_of_range(msg);
}

inline std::string& StrBlob::front(){
	check(0,"front of empty StrBlob");
	return data->front();
}

inline std::string& StrBlob::back(){
	check(0,"back on empty StrBlob");
	return data->back();
}

inline std::string& StrBlob::front() const{
	check(0,"front of empty StrBlob");
	return data->front();
}

inline std::string& StrBlob::back() const{
	check(0,"back on empty StrBlob");
	return data->back();
}
inline void StrBlob::pop_back(){
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}

int main(){
	const StrBlob csb{"hello","world","LuckyGan"};
	StrBlob sb{"hello","world","zack"};

	std::cout<<csb.front()<<" "<<csb.back()<<std::endl;
	sb.back()="LuckyGan";
	std::cout<<sb.front()<<" "<<sb.back()<<std::endl;
	return 0;
}

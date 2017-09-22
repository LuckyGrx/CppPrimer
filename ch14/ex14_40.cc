 ///
 /// @file    ex10_16.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-25 13:32:03
 ///
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using std::endl;
using std::cout;
using std::cin;
using std::vector;
using std::stable_sort;
using std::sort;
using std::string;
using std::unique;

class ShorterString{
public:
	bool operator()(const string &lhs,const string &rhs) const{
		return lhs.size()<rhs.size();
	}
};

class BiggerEqual{
public:
	BiggerEqual(size_t sz):_sz(sz){
	}
	bool operator()(const string &s){
		return s.size()>=_sz;
	}
private:
	size_t _sz;
};

class Print{
public:
	void operator()(const string &a) const{
		cout<<a<<" ";
	}
};
/*
 *消除重复单词
 */
void elimDups(vector<string> &words){
	sort(words.begin(),words.end());
	auto end_unique=unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}

void biggies(vector<string> &words,vector<string>::size_type sz){
	//将words按字典序排序，删除重复单词
	elimDups(words);
	//按长度排列，长度相同额单词维持字典序
	stable_sort(words.begin(),words.end(),ShorterString());
	//获取一个迭代器，指向第一个满足size()>=sz的元素
	auto wc=find_if(words.begin(),words.end(),BiggerEqual(sz));

	//打印长度大于等于给定值的单词，每个单词后面接一个空格
	for_each(wc,words.end(),Print());
	cout<<endl;
}
int main(){
	vector<string> words{"1234","12","111","Ga","cp","ali"};;
	biggies(words,3);
	return 0;
}


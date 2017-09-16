 ///
 /// @file    ex9_28.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-16 09:37:29
 ///
#include <iostream>
#include <forward_list>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void insert_string_to_forwardlist(forward_list<string> &flst,const string &str1,const string &str2){
	auto prev=flst.before_begin();
	auto curr=flst.begin();
	while(curr!=flst.end()){
		if(*curr==str1){
			curr=flst.insert_after(curr,str2);
			return ;
		}else{
			++prev;
			++curr;
		}
	}
	flst.insert_after(prev,str2);
}

int main(){
	{
		forward_list<string> flst{"a","b","c","d","e","f","g"};
		string str1("c"),str2("h");
		insert_string_to_forwardlist(flst,str1,str2);
		for(const auto &elem:flst)
			cout<<elem<<" ";
		cout<<endl;
	}
	{
		forward_list<string> flst{"a","b","c","d","e","f","g"};
		string str1("i"),str2("h");
		insert_string_to_forwardlist(flst,str1,str2);
		for(const auto &elem:flst)
			cout<<elem<<" ";
		cout<<endl;
	}

	return 0;
}

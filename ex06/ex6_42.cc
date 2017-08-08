 ///
 /// @file    ex6_42.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-13 17:00:01
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

string make_plural(size_t ctr,const string& word,const string& ending="s"){
	return (ctr>1)?word+ending:word;
}

int main(){
	cout<<make_plural(1,"success","es")<<" "<<make_plural(1,"failure")<<endl;
	cout<<make_plural(2,"success","es")<<" "<<make_plural(2,"failure")<<endl;
	return 0;
}

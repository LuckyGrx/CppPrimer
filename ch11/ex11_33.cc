 ///
 /// @file    ex11_33.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-02 14:17:07
 ///
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::istringstream;
using std::ifstream;
using std::runtime_error;
/*
 *读取转换规则文件，建立map，用于保存每个单词到其转换内容的映射
 */
map<string,string> buildMap(ifstream &map_file){
	map<string,string> trans_map;
	string key;
	string value;
	while(map_file>>key&&getline(map_file,value)){
		if(value.size()>1)
			trans_map[key]=value.substr(1);
		else
			throw runtime_error("no rule for "+key);
	}
	return trans_map;
}
/*
 *接受一个string，如果存在转换规则，返回转换后的内容
 */
const string& transform(const string &s,const map<string,string> &m){
	auto map_it=m.find(s);
	if(map_it!=m.cend())
		return map_it->second;
	else
		return s;
}
/*
 *第一个参数绑定到单词转换文件，第二个参数绑定到要转换的文本文件
 */
void word_transform(ifstream &map_file,ifstream &input){
	auto trans_map=buildMap(map_file);
	string text;
	while(getline(input,text)){
		istringstream stream(text);
		string word;
		bool firstword=true;
		while(stream>>word){
			if(firstword)
				firstword=false;
			else
				cout<<" ";
			cout<<transform(word,trans_map);
		}
		cout<<endl;
	}
}
int main(){
	ifstream ifs_map("word_map.txt"),
			 ifs_content("content.txt");
	if(ifs_map&&ifs_content)
		word_transform(ifs_map,ifs_content);
	else
		std::cerr<<"can't find the documents."<<endl;
	return 0;
}

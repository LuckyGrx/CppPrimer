 ///
 /// @file    ex12_27.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-25 10:49:01
 ///
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <set>
#include <map>
#include <fstream>
class QueryResult;
class TextQuery{
public:
	TextQuery()=delete;
	TextQuery(std::ifstream& ifs);
	QueryResult query(const std::string&);
private:
	std::vector<std::string> _lines;//记录每行的文本
	std::map<std::string,std::set<int>> _lines_of_words;//记录每个单词出现的行号
	unsigned _word_cnt;
};
TextQuery::TextQuery(std::ifstream& ifs):_word_cnt(0){
	std::string line,word;
	std::istringstream iss;
	unsigned line_no=1;
	while(getline(ifs,line)){
		_lines.push_back(line);
		iss.str(line);
		while(iss>>word){
			_lines_of_words[word].insert(line_no);
		}
		++line_no;
	}
}
QueryResult TextQuery::query(const std::string& word){
	if(_lines_of_words.find(word)!=_lines_of_words.end()){//找到该单词

	}else{//未找到该单词
	}
}
class QueryResult{
public:
private:
	std::string sought;

};
void runQueries(std::ifstream&);
int main(int argc,char** argv){
	if(argc!=2){
		std::cout<<"args error!"<<std::endl;
		return -1;
	}

	return 0;
}
void runQueries(std::ifstream &infile){
	TextQuery tq(infile);
	while(true){
		std::cout<<"enter word to look for, or q to quit:";
		std::string s;
		if(!(std::cin>>s)||s=="q")
			break;
		print(std::cout,tq.query(s))<<std::endl;
	}
}

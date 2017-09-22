 ///
 /// @file    ex14_38.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-22 17:14:41
 ///
#include <iostream>
#include <string>
#include <fstream>
using std::endl;
using std::cout;
using std::string;
using std::ifstream;

class LenOfStr{
public:
	LenOfStr(size_t lower,size_t upper=SIZE_MAX):_lower(lower),_upper(upper){
	}
	bool operator()(const string& word){
		return word.size()>=_lower&&word.size()<=_upper;
	}
private:
	size_t _lower;
	size_t _upper;
};

int main(){
	ifstream is("../data/letter.txt");
	if(!is){
		return -1;
	}
	int cnt_1_to_9=0,cnt_more_10=0;
	LenOfStr test1(1,9),test2(10);

	string word;
	while(is>>word){
		if(test1(word))
			++cnt_1_to_9;
		else if(test2(word))
			++cnt_more_10;
	}
	cout<<cnt_1_to_9<<" "<<cnt_more_10<<endl;
    is.close();
	return 0;
}

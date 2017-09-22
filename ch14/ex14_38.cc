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
	LenOfStr(size_t len):_len(len){
	}
	bool operator()(const string& word){
		return word.size()==_len;
	}
private:
	size_t _len;
};

int main(){
	ifstream is("../data/letter.txt");
	if(!is){
		return -1;
	}
	int cnt_1=0,cnt_2=0,cnt_3=0,cnt_4=0,cnt_5=0,
		cnt_6=0,cnt_7=0,cnt_8=0,cnt_9=0,cnt_10=0;
	LenOfStr test1(1),test2(2),test3(3),test4(4),test5(5),
			 test6(6),test7(7),test8(8),test9(9),test10(10);

	string word;
	while(is>>word){
		if(test1(word))
			++cnt_1;
		else if(test2(word))
			++cnt_2;
		else if(test3(word))
			++cnt_3;
		else if(test4(word))
			++cnt_4;
		else if(test5(word))
			++cnt_5;
		else if(test6(word))
			++cnt_6;
		else if(test7(word))
			++cnt_7;
		else if(test8(word))
			++cnt_8;
		else if(test9(word))
			++cnt_9;
		else if(test10(word))
			++cnt_10;
	}
	cout<<cnt_1<<" "<<cnt_2<<" "<<cnt_3<<" "<<cnt_4<<" "<<cnt_5<<" "
		<<cnt_6<<" "<<cnt_7<<" "<<cnt_8<<" "<<cnt_9<<" "<<cnt_10<<endl;
    is.close();
	return 0;
}

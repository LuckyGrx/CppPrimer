 ///
 /// @file    ex5_09.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-09 15:53:22
 ///
 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	unsigned vowelCnt=0;
	char ch;
	while(cin>>ch){
		if('a'==ch||'e'==ch||'i'==ch||'o'==ch||'u'==ch)
			++vowelCnt;
	}
	cout<<"Number of vowel is "<<vowelCnt<<endl;
	return 0;
}

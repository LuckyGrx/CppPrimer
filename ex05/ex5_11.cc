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
	unsigned aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0,sapceCnt=0,tabCnt=0,lineCnt=0;
	char ch;
	while(cin>>ch){
		switch(ch){
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
			case ' ':
				++sapceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++lineCnt;
				break;
		}
	}
	cout<<"Number of vowel a: \t"<<aCnt<<endl
		<<"Number of vowel e: \t"<<eCnt<<endl
		<<"Number of vowel i: \t"<<iCnt<<endl
		<<"Number of vowel o: \t"<<oCnt<<endl
		<<"Number of vowel u: \t"<<uCnt<<endl
		<<"Number of space: \t"<<sapceCnt<<endl
		<<"Number of tab: \t"<<tabCnt<<endl
		<<"Number of line : \t"<<lineCnt<<endl;
	return 0;
}

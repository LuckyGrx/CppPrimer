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
	unsigned aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0,sapceCnt=0,tabCnt=0,lineCnt=0,
			 ffCnt=0,flCnt=0,fiCnt=0;
	char ch,prech;
	while(cin>>ch){
		switch(ch){
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
				if('f'==prech)
					++fiCnt;
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
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
			case 'f':
				if('f'==prech)
					++ffCnt;
				break;
			case 'l':
				if('f'==prech)
					++flCnt;
				break;
		}
		prech=ch;
	}
	cout<<"Number of vowel a: \t"<<aCnt<<endl
		<<"Number of vowel e: \t"<<eCnt<<endl
		<<"Number of vowel i: \t"<<iCnt<<endl
		<<"Number of vowel o: \t"<<oCnt<<endl
		<<"Number of vowel u: \t"<<uCnt<<endl
		<<"Number of space: \t"<<sapceCnt<<endl
		<<"Number of tab: \t"<<tabCnt<<endl
		<<"Number of line : \t"<<lineCnt<<endl
		<<"Number of ff:\t"<<ffCnt<<endl
		<<"Number of fl:\t"<<flCnt<<endl
		<<"Number of fi:\t"<<fiCnt<<endl;
	return 0;
}

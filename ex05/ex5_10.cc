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
	unsigned aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
	char ch;
	while(cin>>ch){
		switch(ch){
			case 'a':case 'A':
				++aCnt;
				break;
			case 'e':case 'E':
				++eCnt;
				break;
			case 'i':case 'I':
				++iCnt;
				break;
			case 'o':case 'O':
				++oCnt;
				break;
			case 'u':case 'U':
				++uCnt;
				break;
		}
	}
	cout<<"Number of vowel a(A): \t"<<aCnt<<endl
		<<"Number of vowel e(E): \t"<<eCnt<<endl
		<<"Number of vowel i(I): \t"<<iCnt<<endl
		<<"Number of vowel o(O): \t"<<oCnt<<endl
		<<"Number of vowel u(U): \t"<<uCnt<<endl;
	return 0;
}

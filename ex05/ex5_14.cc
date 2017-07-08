 ///
 /// @file    ex5_14.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-08 21:06:15
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string str1,str2;
	bool isFirst=true;
	int maxCnt=1;
	int cnt=1;
	while(cin>>str1){
		if(isFirst)
			isFirst=false;
		else{
			if(str1==str2)
				++cnt;
			else{
				if(cnt>maxCnt)
					maxCnt=cnt;
				cnt=1;
			}
		}
		str2=str1;
	}
	if(1==maxCnt)
		cout<<"no any words occurrs two times"<<endl;
	else
		cout<<"max count of occurrs of words is "<<maxCnt<<endl;
	return 0;
}

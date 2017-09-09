 ///
 /// @file    ex5_20.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 11:02:10
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string word1,word2;
	bool isDup=false;
	while(cin>>word1){
		if(word1==word2){
			cout<<word1<<" occurs twice in succession."<<endl;
			isDup=true;
			break;
		}
		word2=word1;
	}
	if(!isDup){
		cout<<"no words duplicated."<<endl;
	}
	return 0;
}

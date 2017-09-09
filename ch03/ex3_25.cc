 ///
 /// @file    ex3_25.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 16:01:48
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
	vector<unsigned> scores(11,0);
	unsigned grade;
	while(cin>>grade){
		if(grade<=100){
			unsigned& tmp=*(scores.begin()+grade/10);
			++tmp;
		}
	}
	for(auto& score:scores){
		cout<<score<<" ";
	}
	cout<<endl;
	return 0;
}

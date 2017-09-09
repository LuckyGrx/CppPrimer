 ///
 /// @file    ex6_23.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-18 19:15:04
 ///
#include <iostream>
using std::cout;
using std::endl;
void print(int i){
	cout<<i<<endl;
}
void print(int (&j)[2]){
	for(auto elem:j){
		cout<<elem<<" ";
	}
	cout<<endl;
}
int main(){
	int i=0,j[2]={0,1};
	print(i);
	print(j);
	return 0;
}

 ///
 /// @file    ex1_16.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-04 16:43:31
 ///
 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int val=0,sum=0;
	while(cin>>val){
		sum+=val;
	}
	cout<<"Sum is:"<<sum<<endl;
	return 0;
}

 ///
 /// @file    ex1_18.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-04 17:03:43
 ///
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int currVal=0,val=0;
	if(cin>>currVal){
		int cnt=1;
		while(cin>>val){
			if(val==currVal)
				++cnt;
			else{
				cout<<currVal<<" occurs "
					<<cnt<<" times"<<endl;
				currVal=val;
				cnt=1;
			}
		}
		cout<<currVal<<" occurs "
			<<cnt<<" times"<<endl;
	}
	return 0;
}

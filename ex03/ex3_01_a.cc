 ///
 /// @file    ex1_09.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-22 17:13:48
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(){
	int sum=0,val=50;
	while(val<=100){
		sum+=val;
		++val;
	}
	cout<<"Sum of 50 to 100 inclusive is "
		     <<sum<<endl;
	return 0;
}
//output:Sum of 50 to 100 inclusive is 3825

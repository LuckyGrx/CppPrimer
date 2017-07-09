 ///
 /// @file    ex5_03.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-09 17:12:14
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(){
	int sum=0,val=1;
	while(sum+=val,++val<=10);
	cout<<"Sum of 1 to 10 inclusive is "
		<<sum<<endl;
	return 0;
}
//显然，代码的可读性降低了

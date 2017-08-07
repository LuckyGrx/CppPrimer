 ///
 /// @file    test.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-05 11:24:30
 ///
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int Fibonacci(int n){
	if(1==n)
		return 0;
	else if(2==n)
		return 1;
	else{
		int a=0,b=1,c;
		n=n-2;
		while(n--){
			c=a+b;
			a=b;
			b=c;
		}
		return b;
	}
}
int main(){
	int n;
	while(cin>>n){
		cout<<Fibonacci(n)<<endl;
	}
	return 0;
}

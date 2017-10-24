 ///
 /// @file    ex6_22.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 09:48:41
 ///
 
#include <iostream>
using std::cout;
using std::endl;

void swap(int **a,int **b) {
	int *tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	int val1 = 0,val2 = 1;
	int *a = &val1, *b = &val2;
	cout << "a = " << a <<", " << "b = " << b << endl;
	swap(&a, &b);
	cout << "a = " << a <<", " << "b = " << b << endl;
	return 0;
}

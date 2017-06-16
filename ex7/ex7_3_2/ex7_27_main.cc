 ///
 /// @file    main.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 21:06:03
 ///
#include "ex7_27.h" 
#include <iostream>
using std::cout;
using std::endl;

int main(){
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(cout);
	cout<<endl;
	myScreen.display(cout);
	cout<<endl;
	return 0;
}

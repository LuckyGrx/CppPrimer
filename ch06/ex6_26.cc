 ///
 /// @file    ex6_26.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 19:45:46
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(int argc,char** argv){
	if(argc!=5){
		cout<<"args error!"<<endl;
		return -1;
	}
	cout<<argv[1]<<" "<<argv[2]<<" "<<argv[3]<<" "<<argv[4]<<endl;
	return 0;
}

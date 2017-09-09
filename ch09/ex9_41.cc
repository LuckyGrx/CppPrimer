 ///
 /// @file    ex9_41.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-17 20:04:58
 ///
 
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
	vector<char> cvec{'H','e','l','l','o',' ','w','o','r','l','d'};
	string str(cvec.begin(),cvec.end());
	cout<<str<<endl;
	return 0;
}

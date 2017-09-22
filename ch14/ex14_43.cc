 ///
 /// @file    ch14_43.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-22 22:01:36
 ///
#include <iostream>
#include <vector>
#include <functional>
using std::endl;
using std::cout;
using std::vector;
using std::modulus;
using std::cin;

int main(){
	int input;
	cin>>input;
	vector<int> ivec1{1,2,3,4,5,6};
	bool is_mod=true;
	modulus<int> mod;
	for(const auto& elem:ivec1){
		if(!mod(input,elem)){
			is_mod=false;
			break;
		}
	}
	if(is_mod)
		cout<<"can mod"<<endl;
	else
		cout<<"can not mod"<<endl;
	return 0;
}

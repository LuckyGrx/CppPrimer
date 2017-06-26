 ///
 /// @file    ex9_15.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-25 17:31:59
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> v1{1,2,3,4,5};
	vector<int> v2{1,2,3,4};
	if(v1==v2){
		cout<<"v1==v2"<<endl;
	}else if(v1<v2){
		cout<<"v1<v2"<<endl;
	}else if(v1>v2){
		cout<<"v1>v2"<<endl;
	}

	vector<int> v3{1,2,4,5};
	if(v1==v3){
		cout<<"v1==v3"<<endl;
	}else if(v1<v3){
		cout<<"v1<v3"<<endl;
	}else if(v1>v3){
		cout<<"v1>v3"<<endl;
	}
	return 0;
}

 ///
 /// @file    ex3_43.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-07 16:00:42
 ///
#include <iostream>
using std::cout;
using std::endl;

int main(){
	int ia[3][4]={
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};
	for(const auto& p:ia){
		for(const auto& q:p){
			cout<<q<<" ";
		}
		cout<<endl;
	}
	for(auto i=0;i<3;++i){
		for(auto j=0;j<4;++j){
			cout<<ia[i][j]<<" ";
		}
		cout<<endl;
	}
	for(auto p=ia;p!=ia+3;++p){
		for(auto q=*p;q!=*p+4;++q){
			cout<<*q<<" ";
		}
		cout<<endl;
	}
	return 0;
}

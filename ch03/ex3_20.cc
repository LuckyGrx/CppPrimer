 ///
 /// @file    ex3_20.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-29 23:22:18
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
	vector<int> ivec;
	int tmp;
	while(cin>>tmp){
		ivec.push_back(tmp);
	}
	for(vector<int>::size_type i=0;i<ivec.size();i=i+2){
		if(i+1<ivec.size()){
			cout<<ivec[i]+ivec[i+1]<<" ";
		}else{
			cout<<ivec[i]<<" ";
		}
	}
	cout<<endl;
	for(vector<int>::size_type i=0,j=ivec.size()-1;i<=j;++i,--j){
		cout<<ivec[i]+ivec[j]<<" ";
	}
	cout<<endl;
	return 0;
}

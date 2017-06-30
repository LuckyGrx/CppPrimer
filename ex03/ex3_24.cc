 ///
 /// @file    ex3_24.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-30 09:19:03
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
	if(ivec.empty()){
		return -1;
	}
	vector<int>::const_iterator it=ivec.cbegin();
	for(;it<ivec.cend();it+=2){
		if((it+1)!=ivec.cend()){
			cout<<*it+*(it+1)<<" ";
		}else{
			cout<<*it<<" ";
		}
	}
	cout<<endl;
	it=ivec.cbegin();
	vector<int>::const_iterator it2=ivec.cend()-1;
	for(;it<=it2;++it,--it2){
		cout<<*it+*it2<<" ";
	}
	cout<<endl;
	return 0;
}

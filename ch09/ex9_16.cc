 ///
 /// @file    ex9_16.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-23 16:34:18
 ///
#include <iostream>
#include <vector>
#include <list>
using std::endl;
using std::cout;
using std::vector;
using std::list;
bool isListEqualVector(const list<int>& lst,const vector<int>& vec){
	if(lst.size()!=vec.size())
		return false;
	auto begin=lst.cbegin();
	for(decltype(vec.size()) idx=0;idx<vec.size();++idx,++begin){
		if(vec[idx]!=*begin)
			return false;
	}
	return true;
}
int main(){
	list<int> ilst{1,2,3,4};
	vector<int> ivec1{1,2,3,4};
	vector<int> ivec2{1,2,3,4,5};
	if(isListEqualVector(ilst,ivec1))
		cout<<"ilst==ivec1"<<endl;
	else
		cout<<"ilst!=ivec1"<<endl;
	if(isListEqualVector(ilst,ivec2))
		cout<<"ilst==ivec2"<<endl;
	else
		cout<<"ilst!=ivec2"<<endl;
	return 0;
}

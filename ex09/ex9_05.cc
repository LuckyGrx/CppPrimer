 ///
 /// @file    ex9_04.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-28 23:35:51
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
vector<int>::const_iterator isContainVal(vector<int>::const_iterator beg,vector<int>::const_iterator end,int val){
	while(beg!=end){
		if(*beg==val)
			return beg;
		++beg;
	}
	return end;
}
int main(){
	vector<int> ivec{1,2,3,4,5,6};
	int val=4;
	if(isContainVal(ivec.cbegin(),ivec.cend(),val)!=ivec.cend()){
		cout<<"vector contain this value"<<endl;
	}else{
		cout<<"vector not contain this value"<<endl;
	}
	return 0;
}

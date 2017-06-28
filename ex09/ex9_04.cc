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
bool isContainNumber(vector<int>& vecInt,int number){
	vector<int>::const_iterator begin=vecInt.cbegin();
	vector<int>::const_iterator end=vecInt.cend();
	while(begin!=end){
		if(*begin==number)
			return true;
		++begin;
	}
	return false;
}
int main(){
	vector<int> vecInt{1,2,3,4,5,6};
	int number=4;
	if(isContainNumber(vecInt,number)){
		cout<<"vector contain this number"<<endl;
	}else{
		cout<<"vector not contain this number"<<endl;
	}
	return 0;
}

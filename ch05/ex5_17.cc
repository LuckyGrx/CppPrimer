 ///
 /// @file    ex5_17.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-13 15:48:33
 ///
 
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
bool isSubVector(const vector<int>& v1,const vector<int>& v2){
	decltype(v1.size()) minSize=(v1.size()<v2.size())?v1.size():v2.size();
	for(decltype(v1.size()) idx=0;idx<minSize;++idx){
		if(v1[idx]!=v2[idx])
			return false;
	}
	return true;
}
int main(){
	vector<int> v1{1,2,3,4,5,6},v2{1,2,3,4};
	cout<<isSubVector(v1,v2)<<endl;
	return 0;
}

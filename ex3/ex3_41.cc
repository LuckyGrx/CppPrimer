 ///
 /// @file    ex3_41.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-18 11:46:38
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main(){
	int arrInt[6]={1,2,3,4,5,6};
	vector<int> vInt(begin(arrInt),end(arrInt));
	for(auto& item:vInt){
		cout<<item<<endl;
	}
	return 0;
}

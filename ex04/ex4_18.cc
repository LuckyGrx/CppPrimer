 ///
 /// @file    ex4_18.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-25 10:02:35
 ///
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main(){
	vector<int> ivec{1,1,4,4,5,6,7,8,9,-1};
	auto pbeg=ivec.begin();
	while(pbeg!=ivec.end()&&*pbeg>=0){
		cout<<++*pbeg<<endl;
	}//相当于++(*pbeg),所以会陷入死循环，一直打印第一个元素的值，打印出2,3,4,5,6,7,8,9,10,.....
	return 0;
}

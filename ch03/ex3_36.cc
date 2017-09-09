 ///
 /// @file    ex3_36.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-21 22:34:53
 ///
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
bool isTwoArrayEqual(int* array1,int size1,int* array2,int size2){
	if(size1!=size2)
		return false;
	else{
		for(int idx=0;idx<size1;++idx){
			if(array1[idx]!=array2[idx])
				return false;
		}
		return true;
	}
}

int main(){
	int array1[3]={1,2,3},array2[4]={1,2,3,4},array3[3]={1,2,3};
	vector<int> ivec1{1,2,3},ivec2{1,2,3,4},ivec3{1,2,3};
	if(isTwoArrayEqual(array1,sizeof(array1)/sizeof(array1[0]),array2,sizeof(array2)/sizeof(array2[0])))
		cout<<"array1==arrary2"<<endl;
	else
		cout<<"array1!=array2"<<endl;
	if(isTwoArrayEqual(array1,sizeof(array1)/sizeof(array1[0]),array3,sizeof(array3)/sizeof(array3[0])))
		cout<<"array1==array3"<<endl;
	else
		cout<<"array1!=array3"<<endl;

	if(ivec1==ivec2)
		cout<<"ivec1==ivec2"<<endl;
	else
		cout<<"ivec1!=ivec2"<<endl;
	if(ivec1==ivec3)
		cout<<"ivec1==ivec3"<<endl;
	else
		cout<<"ivec1!=ivec3"<<endl;
	return 0;
}

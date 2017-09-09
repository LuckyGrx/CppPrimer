 ///
 /// @file    ex3_16.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-29 21:40:24
 ///
 
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::string;

template<typename T>
void printCapElem(vector<T>& tvec){
	cout<<"capacity="<<tvec.capacity()<<endl;
	cout<<"element=";
	for(auto& elem:tvec){
		cout<<elem<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> v1;
	printCapElem(v1);

	vector<int> v2(10);
	printCapElem(v2);

	vector<int> v3(10,42);
	printCapElem(v3);

	vector<int> v4{10};
	printCapElem(v4);

	vector<int> v5{10,42};
	printCapElem(v5);

	vector<string> v6{10};
	printCapElem(v6);

	vector<string> v7{10,"hi"};
	printCapElem(v7);
	return 0;
}

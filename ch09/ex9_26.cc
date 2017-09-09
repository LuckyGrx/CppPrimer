 ///
 /// @file    ex9_26.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-17 16:51:56
 ///
 
#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::begin;
using std::end;

int main(){
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> ivec(begin(ia),end(ia));
	list<int> ilst(begin(ia),end(ia));
	
	cout<<"list delete odd elements"<<endl;
	auto l_iter=ilst.begin();
	while(l_iter!=ilst.end()){
		if(*l_iter%2)
			l_iter=ilst.erase(l_iter);
		else
			++l_iter;
	}
	for(const auto& elem:ilst)
		cout<<elem<<" ";
	cout<<endl;

	cout<<"vector delete even elements"<<endl;
	auto v_iter=ivec.begin();
	while(v_iter!=ivec.end()){
		if(*v_iter%2==0)
			v_iter=ivec.erase(v_iter);
		else
			++v_iter;
	}
	for(const auto& elem:ivec)
		cout<<elem<<" ";
	cout<<endl;

	return 0;
}

 ///
 /// @file    ex9_20.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-12 20:21:49
 ///
 
#include <iostream>
#include <list>
#include <deque>
using std::cout;
using std::endl;
using std::cin;
using std::list;
using std::deque;

int main(){
	list<int> ilst{1,2,3,4,5,6,7,8,9,10};
	deque<int> odddeq,evendeq;
	list<int>::const_iterator iter=ilst.cbegin();
	for(;iter!=ilst.cend();++iter){
		if(*iter%2)
			odddeq.push_back(*iter);
		else
			evendeq.push_back(*iter);
	}
	cout<<"The element of odd deque is ";
	for(const auto& elem:odddeq)
		cout<<elem<<" ";
	cout<<endl;
	cout<<"The element of even deque is ";
	for(const auto& elem:evendeq)
		cout<<elem<<" ";
	cout<<endl;

	return 0;
}

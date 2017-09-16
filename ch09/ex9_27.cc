 ///
 /// @file    ex9_27.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-16 09:30:14
 ///
#include <iostream>
#include <forward_list>
using std::cout;
using std::endl;
using std::endl;
using std::forward_list;

int main(){
	forward_list<int> flst{1,2,3,4,5,6,7,8,9,10,11};
	forward_list<int>::iterator prev=flst.before_begin();
	forward_list<int>::iterator curr=flst.begin();
	while(curr!=flst.end()){
		if(*curr&1)
			curr=flst.erase_after(prev);
		else{
			++prev;
			++curr;
		}
	}
	for(const auto &elem:flst){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}

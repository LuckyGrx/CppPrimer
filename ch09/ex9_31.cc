 ///
 /// @file    ex9_31.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-25 22:01:07
 ///
//因为list、forward_list的迭代器不支持+=运算符，所以iter+=2;语句编译器会报错
#include <iostream>
#include <list>
#include <forward_list>
using std::cout;
using std::endl;
using std::list;
using std::forward_list;

void delete_even_copy_odd_list(){
	list<int> ilst{0,1,2,3,4,5,6,7,8,9};
	auto iter=ilst.begin();
	while(iter!=ilst.end()){
		if(*iter%2){
			iter=ilst.insert(iter,*iter);
			++iter;
			++iter;
		}else{
			iter=ilst.erase(iter);
		}
	}
	for(const auto& elem:ilst)
		cout<<elem<<" ";
	cout<<endl;
}
void delete_even_copy_odd_forwardlist(){
	forward_list<int> iflst{0,1,2,3,4,5,6,7,8,9};
	auto iter_pre=iflst.before_begin();
	auto iter_cur=iflst.begin();
	while(iter_cur!=iflst.end()){
		if(*iter_cur%2){
			iter_cur=iflst.insert_after(iter_cur,*iter_cur);
			iter_pre=iter_cur;
			++iter_cur;

		}else{
			iter_cur=iflst.erase_after(iter_pre);
		}
	}
	for(const auto& elem:iflst)
		cout<<elem<<" ";
	cout<<endl;
}
int main(){
	delete_even_copy_odd_list();
	delete_even_copy_odd_forwardlist();
	return 0;
}

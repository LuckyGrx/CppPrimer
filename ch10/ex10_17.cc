 ///
 /// @file    ex10_12.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-25 14:04:56
 ///
#include "../ex07/ex7_26.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::vector;
using std::endl;
using std::string;
using std::sort;
using std::cout;

int main(){
	Sales_data d1("a"),d2("aa"),d3("aaa"),d4("b"),d5("bb"),d6("z");
	vector<Sales_data> vec{d1,d3,d2,d5,d4,d6};
	sort(vec.begin(),vec.end(),[](const Sales_data &lhs,const Sales_data &rhs){return lhs.isbn().size()<rhs.isbn().size();});
	for_each(vec.begin(),vec.end(),
			[](const Sales_data &hs)
			  { cout<<hs.isbn()<<" ";});
	cout<<endl;
	return 0;
}

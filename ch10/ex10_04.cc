 ///
 /// @file    ex10_4.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-28 23:08:00
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<double> vecDouble{1.1,2.0,3.0,4.0,5.0,6.0};
	cout<<"accumulate of vector<double> is "<<accumulate(vecDouble.cbegin(),vecDouble.cend(),0)<<endl;
	return 0;
}
//答案是21而不是预期的21.1
//因为accumulate是模板函数，其内部实现源代码为：
//for(;__first!=__last;++__first)
//	__init=__init+*__first;
//return __init;
//因为__init被该函数的第三实参实例为int类型，所以返回的为整数

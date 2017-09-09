 ///
 /// @file    ex13_31_test.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-08 14:37:06
 ///
#include "ex13_31.h"
#include <vector>
#include <algorithm>

int main(){
	std::vector<HasPtr> hasvec{HasPtr("I am lhs"),HasPtr("I am midle"),HasPtr("I am rhs")};
	sort(hasvec.begin(),hasvec.end());
	return 0;
}

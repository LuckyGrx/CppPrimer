 ///
 /// @file    fact.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-09 11:10:53
 ///
#include "Chapter6.h"

int fact(int val){
	if(0==val||1==val)
		return 1;
	int ret=1;
	for(int idx=2;idx<=val;++idx){
		ret*=idx;
	}
	return ret;
}

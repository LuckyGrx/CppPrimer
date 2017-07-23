 ///
 /// @file    ex3_37.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-18 10:15:31
 ///
#include <string.h> 
#include <iostream>
using std::cout;
using std::endl;
//打印的结果是不确定的，因为判断条件×cp是以‘\0'为结束的，但
//显然字符数组ca并没有包含字符'\0'，++cp会一直进行直到找到某个内存块
//中存放的是'\0'为止
int main(){
	const char ca[]={'h','e','l','l','o'};
	const char* cp=ca;
	while(*cp){
		cout<<*cp;
		++cp;
	}
	return 0;
}

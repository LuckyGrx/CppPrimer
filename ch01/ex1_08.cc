 ///
 /// @file    ex1_07.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2018-02-28 14:31:29
 ///
 
#include <iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
    return 0;
}

#include <iostream>

int main() {
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
//
// ex1_08.cc:12:24: warning: missing terminating " character
//      std::cout << /* "*/" */;
//
// ex1_08.cc:12:5: error: missing terminating " character
//      stdd::cout << /* "*/" */;
//

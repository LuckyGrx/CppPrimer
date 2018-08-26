#ifndef __CP5_EX16_21_H__
#define __CP5_EX16_21_H__

#include <iostream>
using namespace std;

class DebugDelete {
public:
    DebugDelete(ostream &s = cerr): os(s) {
    }
    template <typename T>
    void operator()(T *p) const {
        os << "deleting unique_ptr in " << __PRETTY_FUNCTION__ << endl;
        delete p;
    }
private:
    ostream &os;
};

#endif
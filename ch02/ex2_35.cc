#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    const int i = 42;
    auto j = i;                   
    const auto &k = i;            
    auto *p = &i;                 
    const auto j2 = i, &k2 = i;   

    cout << "i's type = " << typeid(i).name() << endl;
    cout << "j's type = " << typeid(j).name() << endl;
    cout << "k's type = " << typeid(k).name() << endl;
    cout << "p's type = " << typeid(p).name() << endl;
    cout << "j2's type = " << typeid(j2).name() << endl;
    cout << "k2's type = " << typeid(k2).name() << endl;
    return 0;
}
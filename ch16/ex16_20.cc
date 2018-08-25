#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void display(const T &container) {
    using iterator = typename T::const_iterator;
    iterator iter = container.begin();
    for (; iter != container.end(); ++iter) {
        cout << *iter << " ";
    } 
    cout << endl;
}

int main() {
    vector<int> ivec{1, 2, 3, 4};
    display(ivec);
    return 0;
}
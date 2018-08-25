#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void display(const T &container) {
    for (typename T::size_type idx = 0; idx < container.size(); ++idx) {
        cout << container[idx] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> ivec{1, 2, 3, 4};
    display(ivec);
    return 0;
}
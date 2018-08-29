#include <iostream>
#include <functional>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int add(int i, int j) {
    return i + j;
}

auto mod = [](int i, int j) {
    return i % j;
};

struct divide {
    int operator()(int i, int j) {
        return i / j;
    }
};

int main() {
    map<string, function<int(int, int)>> binops = {
        {"+", add},
        {"-", minus<int>()},
        {"*", [](int i, int j) {
            return i * j;
        }},
        {"/", divide()},
        {"%", mod}
    };
    cout << "10 + 5 = " << binops["+"](10, 5) << endl;
    cout << "10 - 5 = " << binops["-"](10, 5) << endl; 
    cout << "10 * 5 = " << binops["*"](10, 5) << endl;
    cout << "10 / 5 = " << binops["/"](10, 5) << endl;
    cout << "10 % 5 = " << binops["%"](10, 5) << endl;
    return 0;
}
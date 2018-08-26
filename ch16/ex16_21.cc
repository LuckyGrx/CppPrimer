#include "ex16_21.h"
#include <memory>
#include <string>

int main() {
    double* p = new double;
    DebugDelete d;
    d(p);

    unique_ptr<int, DebugDelete> up(new int, DebugDelete());
    unique_ptr<string, DebugDelete> usp(new string, DebugDelete());
    return 0;
}
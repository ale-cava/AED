#include <iostream>
#include <cassert>

int main() {
    assert(2 == 1 + 1);
    assert('a' == 'a');
    assert('a' != 'b');
    assert(10 > 7);
    assert(true);
    assert(not false);
    assert(-2 == -2);
    assert(3.141592653589793 == 3.141592653589793);
}
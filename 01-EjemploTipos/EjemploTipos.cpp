#include <string>
#include <cassert>

int main() 
{
    //bool
    assert(true);
    assert(not false);
    
    //char
    assert('a' != 'b');
    assert('d' + 'q' == 0xD5);
    assert( 'C' - 'A' == 2);
    assert('C' - 2 == 'A');
    assert('C' + 2 == 'E');
    assert('C' - 2 == 65);
    assert('C' - 2 == 65 and 'C' - 2 == 'A');

    //int
    assert(123 == 123);
    assert(134 + 4 == 138);
    assert(9999999 > 9999998);
    
    //flotante
    assert(0.23 > -1.0); 
    assert(3E2 == 3e2 );
    assert(3E2 == 3*10*10 );
    assert(3E2 == 300.0 );
    assert(3E6 == 3000000.0 );
    assert(3E6 == 3'000'000.0 );
    assert(2.0 + 1 == 3.0);
    assert(1.0);

}

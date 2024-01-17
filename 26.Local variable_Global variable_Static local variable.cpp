#include <iostream>
using namespace std;

// Global variable declaration
int var=10,var1;

void test();

void tests()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{

     // local variable to main()
    int var = 5;

    test();
    
    // illegal: var1 not declared inside main()
    var1 = 9;
    
    tests();
    tests();

    return 0;
}
void test()
{
    // local variable to test()
    int var1;
    var1 = 6;

    // illegal: var not declared inside test()
    cout << var <<endl;
}
/*
Output: 10
        1
        2
*/
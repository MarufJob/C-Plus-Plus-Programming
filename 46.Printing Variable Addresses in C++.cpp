#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address of var1
    cout << "Address of var1: "<< &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;
    /* If we have a variable var1 in our program, &var1 will give us its address in the memory. For example,*/

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
}
/*
Output: Address of var1: 0x7ffdb95fda9c
        Address of var2: 0x7ffdb95fda98
        Address of var3: 0x7ffdb95fda94
        
*/
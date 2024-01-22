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
        
        Here, 0x at the beginning represents the address is in the hexadecimal form.
        Notice that the first address differs from the second by 4 bytes and the second address differs from the third by 4 bytes.

        This is because the size of an int variable is 4 bytes in a 64-bit system.
        
*/

// C++ Program to display address of each element of an array 

#include <iostream>
using namespace std;

int main()
{
    float arr[3];

    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}
/*
Output: Displaying address using arrays: 
        &arr[0] = 0x7ffc8284a054
        &arr[1] = 0x7ffc8284a058
        &arr[2] = 0x7ffc8284a05c
        
        Displaying address using pointers: 
        ptr + 0 = 0x7ffc8284a054
        ptr + 1 = 0x7ffc8284a058
        ptr + 2 = 0x7ffc8284a05c
*/

/*
    Point to Every Array Elements
    
    Suppose we need to point to the fourth element of the array using the same pointer ptr.

    Here, if ptr points to the first element in the above example then ptr + 3 will point to the fourth element. For example,
    
    
    int *ptr;
    int arr[5];
    ptr = arr;
    
    ptr + 1 is equivalent to &arr[1];
    ptr + 2 is equivalent to &arr[2];
    ptr + 3 is equivalent to &arr[3];
    ptr + 4 is equivalent to &arr[4];
    
    
    Similarly, we can access the elements using the single pointer. For example,
    
    // use dereference operator
    *ptr == arr[0];
    *(ptr + 1) is equivalent to arr[1];
    *(ptr + 2) is equivalent to arr[2];
    *(ptr + 3) is equivalent to arr[3];
    *(ptr + 4) is equivalent to arr[4];
    
    
    Suppose if we have initialized ptr = &arr[2]; then
    
    ptr - 2 is equivalent to &arr[0];
    ptr - 1 is equivalent to &arr[1]; 
    ptr + 1 is equivalent to &arr[3];
    ptr + 2 is equivalent to &arr[4];
*/
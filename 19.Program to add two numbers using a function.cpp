#include <iostream>

using namespace std;

/*
returnType functionName (parameter1, parameter2,...) {
    function body   
}
*/

// declaring a function
int add(int a, int b) {
    return (a + b);
}

int main() {

    int sum;
    
    // calling the function and storing
    // the returned value in sum
    // add(100, 78) is passed to the function as argument
    sum = add(100, 78);
    cout << "100 + 78 = " << sum << endl;

    return 0;
}

/*
Output:100 + 78 = 178
*/
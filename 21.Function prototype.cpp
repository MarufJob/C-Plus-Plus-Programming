#include <iostream>

using namespace std;

// function prototype
void add(int, int);

int main() {
    // calling the function before declaration.
    add(555, 556);
    return 0;
}

// function definition
void add(int a, int b) {
    cout <<"555 + 556 = " << (a + b);
}

/*
Output:555 + 556 = 1111
*/
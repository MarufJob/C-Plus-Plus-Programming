#include <iostream>
using namespace std;

struct temp {
    int i;
    float f;
};

int main() {
    temp *ptr,d;
    
    ptr=&d;
    /*
    Since pointer ptr is pointing to variable d in this program, (*ptr).inch and d.inch are equivalent. Similarly, (*ptr).feet and d.feet are equivalent.
    However, if we are using pointers, it is far more preferable to access struct members using the -> operator, since the . operator has a higher precedence than the * operator.
    
    */
    (*ptr).i=40;
    (*ptr).f=4.30;
    
    /*
    ptr->feet is same as (*ptr).feet
    ptr->inch is same as (*ptr).inc
    */
    
    //cout << (*ptr).i <<"\n"<<(*ptr).f;
    cout << ptr->i <<"\n"<<ptr->f;
    return 0;
}
/*
Output: 40
        4.3
*/
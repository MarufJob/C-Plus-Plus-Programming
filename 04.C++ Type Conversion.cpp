//type conversion *** double <- float <- int <- char <- bool ***
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    bool Bool= 1;
    char Char= 'H';
    int A = 15;
    float B = 25.77;
    double C = 45;
    
    
    cout<<"Value assigns all the data type "<<endl;
    
    cout<<"bool "<< Bool <<endl;
    cout<<"char "<< Char <<endl;
    cout<<"int "<< A <<endl;
    cout<<"float "<< B <<endl;
    cout<<"double "<< C <<endl<<endl;
    
    C=B;
    B=A;
    A=Char;
    Char=Bool;
    Bool=C;

    cout<<"Value assigns all the data type by type conversion  "<<endl;
    
    cout<<"bool "<< Bool <<endl;
    cout<<"char "<< Char <<endl;
    cout<<"int "<< A <<endl;
    cout<<"float "<< B <<endl;
    cout<<"double "<< C <<endl;
    
    
    return 0;
}

/*
Output: Value assigns all the data type 
        bool 1
        char H
        int 15
        float 25.77
        double 45
        
        Value assigns all the data type by type conversion  
        bool 1
        char 
        int 72
        float 15
        double 25.77
*/
//C++ Data Types
#include <iostream>

using namespace std;

int main()
{
    string Name = "Maruf";
    int age = 25;
    
    float area = 64.74;
    double volume = 134.64534;
    
    char test = 'h';

    bool cond = false;

    
    cout << "Hello "<< Name << endl;
    cout << Name<<" string size "<< sizeof(Name) << endl;
    cout << Name<<" age int = "<<age<<", size "<< sizeof(age) << endl<< endl;
    cout << "float = "<<area<<", size "<< sizeof(area) << endl;
    cout << "double = "<<volume<<", size "<< sizeof(volume) << endl << endl;
    cout << "char "<<test<<", size "<< sizeof(test) << endl;
    cout << "bool "<<cond<<", size "<< sizeof(cond) << endl;
    
   
    //cout << "Hello world!" << endl;
    
    return 0;
}

/*
Output: Hello Maruf
        Maruf string size 32
        Maruf age int = 25, size 4

        float = 64.74, size 4
        double = 134.645, size 8

        char h, size 1
        bool 0, size 1
*/
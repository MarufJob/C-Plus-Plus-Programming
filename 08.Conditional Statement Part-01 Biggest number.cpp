#include <iostream>
using namespace std;

int main() {
 int a,b,c;
    std::cin >>a>>b>>c;
    
    if (a>b && a>c)
        cout <<a;
    if (b>a && b>c)
        cout <<b;
    if (c>b && c>a)
        cout <<c;
        
        return 0;
}
/*
Input:55 66 77
Output:77

Input:33 11 22
Output:33
*/

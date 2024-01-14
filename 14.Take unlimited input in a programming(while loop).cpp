#include <iostream>

using namespace std;

int main() {
    int a,b,sum;

    while (cin >> a >> b)

    {
        if(a==0 || b==0)
        {
            cout << "end\n";
            return 0;
        }
        
        
        sum=a+b;
        cout <<sum <<endl;
    }
    return 0;
}
/*
Input:55 55
Output:110

Input:5 0
Output:end
*/

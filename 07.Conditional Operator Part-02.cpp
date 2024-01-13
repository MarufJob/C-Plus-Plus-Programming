#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    a=50;
    b=90;
    c=45,d=55;
    
    (a<b) ?(c>d) ? cout<<c<<endl:(a<b) ? cout<<a<<endl:cout<<b<<endl:cout<<b<<endl;
    
    
   //(a<b) ? cout<<a<<endl:cout<<b<<endl;
   
   // c=45,d=55;
    //(c>d) ? cout<<c<<endl:cout<<d<<endl;;

    return 0;
}


/*
Output: 50
*/
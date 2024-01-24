#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    //create vector, declare
    //vector<int>v;
    
    //It also work
    vector<int>v(5); 
    
    //size and capacity -> capacity increase double double
    cout <<"Size of v: "<<v.size()<<endl;
    cout <<"Capacity of v: "<<v.capacity()<<endl;
    
    //It takes the existing memory
    v[0]=1;
    v[1]=3;
    v[2]=5;
    v[3]=7;
    //v[4]=9;
    
    //It takes the new memory
    v.push_back(1);
    //v.push_back(3);
    //v.push_back(5);
    //v.push_back(7);
    //v.push_back(9);
    
    cout <<"\nValue of vactor v = ";
    
    for(int i=0; i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout <<"\n"<< endl;
    
    cout <<"Size of v: "<<v.size()<<endl;
    cout <<"Capacity of v: "<<v.capacity()<<endl;
    return 0;
}
/*
Output: Size of v: 5
        Capacity of v: 5
        
        Value of vactor v = 1 3 5 7 0 1 // v.push_back(1); It takes the new memory
        
        Size of v: 6
        Capacity of v: 10
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    //create vector, declare
    vector<int>v;
    //It also work
    //vector<int>v(5); 
    //size and capacity -> capacity increase double double
    cout <<"Size of v: "<<v.size()<<endl;
    cout <<"Capacity of v: "<<v.capacity()<<endl;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    
    cout <<"Size of v: "<<v.size()<<endl;
    cout <<"Capacity of v: "<<v.capacity()<<endl;
    return 0;
}

/*
Output: Size of v: 0
        Capacity of v: 0
        Size of v: 5
        Capacity of v: 8
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    //create vector, declare
    vector<int>v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    // cout <<"Size of v: "<<v.size()<<endl;
    // cout <<"Capacity of v: "<<v.capacity()<<endl;
    
    for(int i=0; i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout << endl;
    
    //Update value
    v[1]=2;
    v.pop_back();
    
    for(int i=0; i<v.size();i++)
    cout<<v[i]<<" ";
    
    return 0;
}

/*
Output: 1 3 5 7 9 
        1 2 5 7 
*/
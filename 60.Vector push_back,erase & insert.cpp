//Vector Input analyze
#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    //create vector, declare
    //vector<int>v;
    
    //It also work
    vector<int>v(5); 
    
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
    
    //cout << endl;
    
    //It deletes the value of lest index 
    v.pop_back();
    cout <<"\nValue of vactor v = ";
    for(int i=0; i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout <<"\n"<< endl;
    
    cout <<"Size of v: "<<v.size()<<endl;
    cout <<"Capacity of v: "<<v.capacity()<<endl;
    
    //It deletes the value of the index 2 =5
    v.erase(v.begin()+2);
    cout <<"\nValue of vactor v = ";
    
    for(int i=0; i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout <<"\n"<< endl;
    cout <<"Size of v: "<<v.size()<<endl;
    cout <<"Capacity of v: "<<v.capacity()<<endl;
    
    //It insert the value of the index 2 =55
    v.insert(v.begin()+2,55);
    cout <<"\nValue of vactor v = ";
    
    for(int i=0; i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout <<"\n"<< endl;
    cout <<"Size of v: "<<v.size()<<endl;
    cout <<"Capacity of v: "<<v.capacity()<<endl;
}

/*
Output: Value of vactor v = 1 3 5 7 0 1 

        Size of v: 6
        Capacity of v: 10
        
        Value of vactor v = 1 3 5 7 0 
        
        Size of v: 5
        Capacity of v: 10
        
        Value of vactor v = 1 3 7 0 
        
        Size of v: 4
        Capacity of v: 10
        
        Value of vactor v = 1 3 55 7 0 
        
        Size of v: 5
        Capacity of v: 10
*/
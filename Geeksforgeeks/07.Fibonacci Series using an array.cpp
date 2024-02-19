#include <iostream>
using namespace std;

int main() {
    int i,n,array[1000];
    
    cout<<"Give a number for Fibonacci Series = ";
    cin>>n;
    
    array[0]=0;//first element 
    array[1]=1;//second element
    
    //for input in array
    for(i=2 ; i<n ; i++){
        array[i]=array[i-1]+array[i-2];
    }
    
    
    //for output in array
    for(i=0 ; i<n ; i++){
        cout<<array[i]<< " ";
    }
    
    return 0;
}

/*
Input:  Give a number for Fibonacci Series = 9s
Output: 0 1 1 2 3 5 8 13 21 

Input:  Give a number for Fibonacci Series = 15s
Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 
*/
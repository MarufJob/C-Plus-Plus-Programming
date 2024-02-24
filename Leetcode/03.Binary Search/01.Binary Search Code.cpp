#include <iostream>
using namespace std;

int main() {

    int i,num,target,arr[1000];
    
    cout<<"Enter the size of array = ";
    cin>>num;
    cout<<"Enter the element in array = ";
    for(i=0 ; i<num ; i++)
    cin>>arr[i];
    cout<<"Enter the target value = ";
    cin>>target;
    
    int mid,start=0,end=num-1;
    
    while(start<=end){
        
        mid=(start+end)/2;
        
        if(arr[mid]==target){
            cout<<arr[mid];
            //cout<<start<< " "<<end;
            return 0;
        }
        
        else if (arr[mid]<target){
            start=mid+1;
        }
        
        else{
            end=mid-1;
        }
        
    }

    return 0;
}

/*
Input:  Enter the size of array = 15
        Enter the element in array = 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
        Enter the target value = 7

Output: 7

Input:  Enter the size of array = 11
        Enter the element in array = 11 33 55 77 99 111 333 555 777 999 1111
        Enter the target value = 77

Output: 77
*/

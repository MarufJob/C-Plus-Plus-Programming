#include <iostream>
using namespace std;

int main() {

    int i,j,n,temp,Maruf,arr[1000];
    
    cout<<"Enter the size of array = ";
    cin>>n;
    cout<<"Enter the element in array = ";
    for(i=0 ; i<n ; i++)
    cin>>arr[i];

    for(i=0 ; i<n-1 ; i++ )
    {
        for(j=i+1 ; j>0 ; j--)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
            else
            break;
        }
    }

    for(i=0 ; i<n ; i++ )
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
Input:  Enter the size of array = 15
        Enter the element in array = 14 15 10 11 13 12 5 4 3 2 1 6 7 8 9

Output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 

Input:  Enter the size of array = 10
        Enter the element in array = 10 9 8 7 6 5 4 3 2 1

Output: 1 2 3 4 5 6 7 8 9 10 
*/

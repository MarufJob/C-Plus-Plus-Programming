#include <iostream>
using namespace std;

int main() {
    
    int i,temp, arr[]={1,2,3,4,5,6,7};
    int j= sizeof(arr) / sizeof(arr[0])-1;
    //cout<<j;
    for(i = 0 ; i<j ; i++,j--)
        {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           
        }
    cout<<"Array is = ";
    for(i = 0; i<7 ; i++)
        {
           cout<<arr[i]<<" ";
        }

    return 0;
}

/*
Output: Array is = 7 6 5 4 3 2 1 
*/
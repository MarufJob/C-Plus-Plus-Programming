#include <iostream>
using namespace std;
int main() {
    
    int i,n,length, arr[15]={1,5,7,9,11,13,15,17,19,21,23,25,27,29,30};
    cout << "Take a number = ";
    cin >>n;
    // Calculate the number of elements in the array
    length = sizeof(arr)/ sizeof(arr[0]);
    
    
    //for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    for(i=0 ; i<length ; i++)
    {
        if(n==arr[i]){
            cout <<"Find the "<<n<<" number"<<endl;
            return 0;
        }
    }
    cout <<"Not find the "<<n<<" number"<<endl;
    
    return 0;
}

/*
Input:  Take a number = 7
Output: Find the 7 number

Input:  Take a number = 14
Output: Not find the 14 number
*/
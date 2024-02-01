#include <iostream>
using namespace std;
int main() {
    
    int i,j,n,length, arr[15]={1,5,7,9,11,13,15,17,19,21,23,25,27,29,29};
    
    length = sizeof(arr)/ sizeof(arr[0]);
    
    
    //for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    for(i=0 ; i<length-1 ; i++)
    {
        for(j=i+1 ; j<length ; j++){
            if(arr[i]==arr[j]){
            cout <<"Find the repeat element "<<arr[i]<<" number"<<endl;
            return 0;
            }
        }
        
    }
    cout <<"Not find the repeat element "<<arr[i]<<" number"<<endl;
    
    return 0;
}
/*

Output: Find the repeat element 29 number

*/

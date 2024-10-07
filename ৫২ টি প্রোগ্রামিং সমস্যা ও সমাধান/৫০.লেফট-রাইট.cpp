#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    int t,i,j,S_len;
    char str[50];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        cout<<"Enter a string: ";
        
        //cin.getline(str,50);
        cin.get(str,50);
        cin.ignore();// Consume the newline character after inputting the string
        
        
        S_len = strlen(str);
        // cout<<S_len<<endl;
        // cout<<sizeof(S)/sizeof(S[0])<<endl;
        
        //for(j=0 ; S[j]!='\0' ; j++)
        for(j=0 ; j<S_len ; j++)
        {
            if(str[j]=='L')
            {
                // cout<<str[j]<<endl;
                // cout<<str[j-1]<<endl;
                str[j]=str[j-1];
                // cout<<str[j]<<endl;
            }
            
            if(str[j]=='R')
            {
                // cout<<str[j]<<endl;
                // cout<<str[j+1]<<endl;
                str[j]=str[j+1];
                // cout<<str[j]<<endl;
            }
        }
        cout<<str<<endl;
     }
    return 0;
}



/*
How many input are you taking = 5
Input :Enter a string: 0L7
Output:007
Input :Enter a string: 4R5L9
Output:45559
Input :Enter a string: 71
Output:71
Input :Enter a string: 8R4R0
Output:84400
Input :Enter a string: 34R92L6
Output:3499226
*/

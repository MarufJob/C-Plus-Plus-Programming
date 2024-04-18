#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j,S_len;
    char S[10000];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        int count=1;
        //char word_line[20];
        
        cout<<"Enter a string: ";
        
        //cin.getline(S,250);
        cin.get(S,10000);
        cin.ignore();// Consume the newline character after inputting the string
        
        
        S_len = strlen(S);
        
        for(j=0 ; j<S_len ; j++)
        {
            if(S[j]==' ')
            {
                count++;
            }
        }
   
        cout<<"Count = "<<count<<endl;
     }
    

    return 0;
}


/*
How many input are you taking = 5
Input :Enter a string: Hello world
Output:Count = 2
Input :Enter a string: Dhaka is the capital of Bangladesh
Output:Count = 6
Input :Enter a string: It is the winter of discontent
Output:Count = 6
Input :Enter a string: I broke my computer
Output:Count = 4
Input :Enter a string: His last play was a big hit
Output:Count = 7
*/
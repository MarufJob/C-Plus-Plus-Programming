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
        int count=0;
        //char word_line[20];
        
        cout<<"Enter a string: ";
        
        //cin.getline(S,250);
        cin.get(S,10000);
        cin.ignore();// Consume the newline character after inputting the string
        
        
        S_len = strlen(S);
        // cout<<S_len<<endl;
        // cout<<sizeof(S)/sizeof(S[0])<<endl;
        
        //for(j=0 ; S[j]!='\0' ; j++)
        for(j=0 ; j<S_len ; j++)
        {
            if(S[j]==' ')
            {
                count++;
            }
        }
   
        cout<<"Count = "<<count+1<<endl;
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



/*

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j;
    char S[10000];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        int count=0;
        bool inWord = false;
        
        cout<<"Enter a string: ";
        
        //cin.getline(S,250);
        cin.get(S,10000);
        cin.ignore();// Consume the newline character after inputting the string
        
        
        
        for(j=0 ; S[j]!='\0' ; j++)
        {
            if(S[j]!=' ' && !inWord)
            {
                count++;
                inWord = true;
            }
            else if(S[j]==' ')
            {
                inWord = false;
            }
        }
   
        cout<<"Count = "<<count<<endl;
     }
    
    return 0;
}

*/


/*
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        int count=0;
        bool inWord = false;
        string S;
        
        cout<<"Enter a string: ";
        getline(cin, S); // Read the entire line

        for(char c : S)
        {
            if(c!=' ' && !inWord)
            {
                count++;
                inWord = true;
            }
            else if(c==' ')
            {
                inWord = false;
            }
        }
        cout<<"Count = "<<count<<endl;
     }
    return 0;
}
*/



/*
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
        int count=0,j=0;
        
        cout<<"Enter a string: ";
        
        //cin.getline(S,250);
        cin.get(S,10000);
        cin.ignore();// Consume the newline character after inputting the string
        
        S_len = strlen(S);
        // cout<<S_len<<endl;
        // cout<<S[S_len-1]<<endl;
        
        for(char c:S)
        {
            //cout<<c<<endl;
            j++;
            
            if(c==' ')
            {
                count++;
                //cout<<"space = "<<count<<endl;
            }
            if(c==S[S_len-1] && S_len==j)
            {
                break;
            }
        }
        cout<<"Count = "<<count+1<<endl;
     }
    return 0;
}
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j,k,s_len;
    char str[250];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        int word=1,Probability=1;
        char word_line[20];
        
        cout<<"Enter a string: ";
        
        //cin.getline(str,250);
        cin.get(str,250);
        cin.ignore();// Consume the newline character after inputting the string
        
        //cout<<str<<endl;
        
        s_len = strlen(str);
        
        for(j=0 ; j<s_len ; j++)
        {
            if(str[j]==' ')
            {
                word++;
            }
            cout<<str[j]<<endl;
        }
    //     cout<<word<<endl;
        
         for(j=0,k=0 ; j<s_len ; j++,k++)
        {
            word_line[k]=str[j];
            if(str[j]==' ' || j==s_len-1)
            {
                if(j==s_len-1)
                k++;
                
                word_line[k] = '\0'; // Set the last character to null
                cout<<word_line<<endl;
                //word_line[k] = '\0';
               k=-1;
            }
           
        }
        
        
    //      for(j=1 ; j<=word ; j++)
    //     {
            
    //             Probability=Probability*j;
           
    //     }
    //     cout<<"Probability = "<<Probability<<endl;
     }
    

    return 0;
}



/*

    for(i = 0; i < t; i++)
    {
        cout << "Enter a string: ";
        
        //cin.getline(S, 1002);
        
        cin.get(S, 1002);
        cin.ignore(); // Consume the newline character after inputting the string
        
        s_len = strlen(S);
        //cout<<"S_Len = "<<s_len<<endl;
        
        for(j=0, k=0; j<s_len; j++)
        {
            if(S[j]!= ' ')
            {
                word[k] = S[j];
                k++;
            }
            else if (k > 0 )
            {
                word[k] = '\0';
                print_reverse(word);
                
                if(j!=s_len-1)
                cout<<" ";
                
                k = 0;
            }
        }
        if (k>0)
        {
            word[k]='\0';
            print_reverse(word);
        }
        
        cout<<endl;
    }
    return 0;
}


// function definition
void print_reverse(char str[])
{
    int i;
    for (i = strlen(str) - 1; i>=0; i--)
    {
        cout<<str[i];
    }
}
*/

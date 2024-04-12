#include <iostream>

using namespace std;

int main() {
    
    int t,i,j;
    
    cout<<"How many input are you taking = ";
    cin>>t;
    
    for(i=0 ; i<t ; i++)
    {
        
    }
    

    return 0;
}



/*
#include <iostream>
#include <cstring>
//#include <string>

using namespace std;

// function prototype
void print_reverse(char str[]);

int main() {
    int i, j, k, t, s_len;
    char S[1002],word[1002];
    
    cout << "How many input are you taking = ";
    cin>>t;
    cin.ignore(); // Consume the newline character after inputting the string
    
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
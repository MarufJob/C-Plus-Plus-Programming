#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    int t,i,j,k,S1_len,S2_len;
    char str1[128],str2[128];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        cout<<"Enter a string and substring: ";
        //cin.getline(str,50);
        cin.get(str1,128);
        cin.ignore();// Consume the newline character after inputting the string
        
        //cin.getline(str,50);
        cin.get(str2,128);
        cin.ignore();// Consume the newline character after inputting the string
        
        int count=1;
        
        S1_len = strlen(str1);
        S2_len = strlen(str2);
        // cout<<"S2_len = "<<S2_len<<endl;
        // cout<<sizeof(str2)/sizeof(str2[0])<<endl;
        
        //for(j=0 ; S[j]!='\0' ; j++)
        for(j=0 ; j<S1_len ; j++)
        {
            if(str1[j]==str2[0])
            {
                // cout<<str1[j]<<" = "<<j<<endl;
                for(k=1 ; k<S2_len ; k++)
                {
                    if(str2[k]!=str1[j+k])
                    {
                        count=1;
                        break;
                    }
                    
                    else count++;
                    
                }
                if(count==S2_len)
                {
                    // cout<<"Index = "<<j<<endl;
                    cout<<j<<endl;
                    break;
                }
            }
        }
     }
    return 0;
}



/*
How many input are you taking = 5
Input :Enter a string and substring: banana
                                     ana
Output:1
Input :Enter a string and substring: banana
                                     ban
Output:0
Input :Enter a string and substring: aquickbrownfoxjumpsoverthelazydog
                                     fox
Output:11
Input :Enter a string and substring: foobar
                                     foobar
Output:0
Input :Enter a string and substring: fazley_atif_maruf
                                     maruf
Output:12
*/



/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    int t,i,j,k,S1_len,S2_len;
    char str1[128],str2[128];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        cout<<"Enter a string and substring: ";
        //cin.getline(str,50);
        cin.get(str1,128);
        cin.ignore();// Consume the newline character after inputting the string
        
        //cin.getline(str,50);
        cin.get(str2,128);
        cin.ignore();// Consume the newline character after inputting the string
        
        S1_len = strlen(str1);
        S2_len = strlen(str2);
        // cout<<"S2_len = "<<S2_len<<endl;
        // cout<<sizeof(str2)/sizeof(str2[0])<<endl;
        
        //for(j=0 ; S[j]!='\0' ; j++)
        for(j=0 ; j<S1_len ; j++)
        {
            if(str1[j]==str2[0])
            {
                // cout<<str1[j]<<" = "<<j<<endl;
                for(k=1 ; k<S2_len ; k++)
                {
                    if(str2[k]!=str1[j+k])
                    {
                        break;
                    }
                    
                }
                if(k==S2_len)
                {
                    // cout<<"Index = "<<j<<endl;
                    cout<<j<<endl;
                    break;
                }
            }
        }
     }
    return 0;
}
*/

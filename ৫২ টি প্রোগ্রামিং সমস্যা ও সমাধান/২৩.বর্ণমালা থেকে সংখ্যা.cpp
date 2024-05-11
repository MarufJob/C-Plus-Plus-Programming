#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j,S_len;
    char S[100];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        int num = 0;
        int A = 65;
        cout<<"Enter a string: ";
        
        //cin.getline(S,250);
        cin.get(S,100);
        cin.ignore();// Consume the newline character after inputting the string
        
        
        S_len = strlen(S);
        
        //for(j=0 ; S[j]!='\0' ; j++)
        for(j=0 ; j<S_len ; j++)
        {
           num=S[j]-A+1;
           cout<<num;
        }
           cout<<endl;
     }
    return 0;
}



/*
How many input are you taking = 3
Input :Enter a string: ABZ
Output:Count = 1226
Input :Enter a string: ZYB
Output:Count = 26252
Input :Enter a string: CODING
Output:Count = 31549147
Input :Enter a string: THEYGAVEABIGPARTYFORME
Output:Count = 20852571225129716118202561518135
Input :Enter a string: SHEWASTWENTYTWOYEARSOLD
Output:Count = 198523119202351420252023152551181915124
*/
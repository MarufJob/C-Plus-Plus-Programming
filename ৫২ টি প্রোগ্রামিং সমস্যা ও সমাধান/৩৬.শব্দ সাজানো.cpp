#include <iostream>
#include <cstring>
//#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int i,j,k,T,length,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num;
        cin.ignore();

        char str[num][10000];
        char temp[10000];

        for(j=1; j<=num; j++)
        {
            cin.getline(str[j], 10000);
            //cin.ignore();
            //scanf(" %[^\n]",str[j]);
        }
/*
        for(j=1; j<=num; j++)
        {
            length=strlen(str[j]);
            for(k=0 ; k<length ; k++)
            {
               cout<<str[j][k];
            }
            cout<<endl;
        }
*/
        for(j=1; j<num; j++)
        {
            length=strlen(str[j]);
            for(k=1 ; j+k<=num ; k++)
            {
                cout<<"j -> "<<j<<" k -> "<<k<<" j+k -> "<<j+k<<endl;
                if(strcmp(str[j],str[j+k]) > 0)
               {
                   //cout<<j<<str[j][k]<<" ";
                   //cout<<j<<" -> "<<str[j]<<" "<<str[k]<<" ";
                   //cout<<strcmp(str[j],str[j+1])<<endl;
                   cout<<j<<" -> "<<str[j]<<" "<<j+k<<" -> "<<str[j+k]<<" ";
                   strcpy(temp,str[j]);
                   strcpy(str[j],str[j+k]);
                   strcpy(str[j+k],temp);
                   cout<<j<<" <-> "<<str[j]<<endl;
                   //cout<<" -> "<<str[j][k]<<endl;
               }
            }
            //cout<<endl;
        }

        for(j=1; j<=num; j++)
        {
            length=strlen(str[j]);
            cout<<j<<" = ";
            for(k=0 ; k<length ; k++)
            {
               cout<<str[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}




/*
Fazley
Atif
Maruf
Atif
Fazley

abz
abx
abm
abf
aba
*/

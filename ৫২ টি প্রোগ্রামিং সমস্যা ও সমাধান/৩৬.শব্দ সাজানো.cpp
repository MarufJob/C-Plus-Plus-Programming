#include <iostream>
#include <cstring>
#include <string.h>
//#include <stdio.h>
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

        for(j=1; j<num; j++)
        {
            length=strlen(str[j]);
            for(k=1 ; j+k<=num ; k++)
            {
                //cout<<"j -> "<<j<<" k -> "<<k<<" j+k -> "<<j+k<<endl;
                if(strcmp(str[j],str[j+k]) > 0)
               {
                   //cout<<j<<" -> "<<str[j]<<" "<<j+k<<" -> "<<str[j+k]<<" ";
                   strcpy(temp,str[j]);
                   strcpy(str[j],str[j+k]);
                   strcpy(str[j+k],temp);
                   //cout<<j<<" <-> "<<str[j]<<endl;
               }
            }
        }

        for(j=1; j<=num; j++)
        {
            length=strlen(str[j]);
            //cout<<j<<" = ";
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
How many number you taking = 3
Input : Give a number how many word you taking = 5
        x-ray
        apple
        cat
        bat
        house
Output: apple
        bat
        cat
        house
        x-ray
Input : Give a number how many word you taking = 3
        aaz
        aam
        aaa
Output: aaa
        aam
        aaz
Input : Give a number how many word you taking = 5
        Fazley
        Atif
        Maruf
        Atif
        Fazley
Output: Atif
        Atif
        Fazley
        Fazley
        Maruf
*/



/*
#include <iostream>
#include <cstring>
#include <string.h>
//#include <stdio.h>
using namespace std;

int main()
{
    int i,j,k,T,length,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number how many word you taking = ";
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

        for(j=1; j<num; j++)
        {
            length=strlen(str[j]);
            for(k=j+1 ; k<=num ; k++)
            {
                //cout<<"j -> "<<j<<" k -> "<<k<<endl;
                if(strcmp(str[j],str[k]) > 0)
               {
                   //cout<<j<<" -> "<<str[j]<<" "<<k<<" -> "<<str[k]<<" ";
                   strcpy(temp,str[j]);
                   strcpy(str[j],str[k]);
                   strcpy(str[k],temp);
                   //cout<<j<<" <-> "<<str[j]<<endl;
               }
            }
        }


        for(j=1; j<=num; j++)
        {
            length=strlen(str[j]);
            //cout<<j<<" = ";
            for(k=0 ; k<length ; k++)
            {
               cout<<str[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}
*/

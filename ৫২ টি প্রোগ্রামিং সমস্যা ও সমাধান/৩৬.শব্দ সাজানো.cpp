#include <iostream>
#include <cstring>
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

        char str[num][100];

        for(j=1; j<=num; j++)
        {
            cin.getline(str[j], 10000);
            //cin.ignore();
            //scanf(" %[^\n]",str[j]);
        }

        for(j=1; j<=num; j++)
        {
            length=strlen(str[j]);
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
*/

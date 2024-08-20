#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l,m,T,num1,num2,num3;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num1;

        int array1[num1];

        for(j=0 ; j<num1 ; j++)
        {
            cin>>array1[j];
        }

        cout<<"Give a number = ";
        cin>>num2;

        num3 = num1+num2;

        int array2[num2],array3[num3];

        for(k=0 ; k<num2 ; k++)
        {
            cin>>array2[k];
        }

        for(l=0,j=0,k=0 ; l<num3 ; l++)
        {
            if(array1[j]<array2[k])
            {
                array3[l] = array1[j];
                j++;
            }

            else
            {
                array3[l] = array2[k];
                k++;
            }
        }

        for(l=0,j=0,k=0 ; l<num3 ; l++)
        {
            cout<<array3[l]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 3 1 3 5
        Give a number = 2 4 10
Output: 1 3 4 5 10
Input : Give a number = 5 10 20 30 40 50
        Give a number = 3 15 21 22
Output: 10 15 20 21 22 30 40 50
Input : Give a number = 4 2 4 6 8
        Give a number = 5 1 3 5 7 9
Output: 1 2 3 4 5 6 7 8 9
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l,m,T,num1,num2,num3;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num1;

        int array1[num1];

        for(j=0 ; j<num1 ; j++)
        {
            cin>>array1[j];
        }

        cout<<"Give a number = ";
        cin>>num2;

        num3 = num1+num2;

        int array2[num2],array3[num3];

        for(k=0 ; k<num2 ; k++)
        {
            cin>>array2[k];
        }

        for(l=0,j=0,k=0 ; l<num3 ; l++)
        {
            if(array1[j]<array2[k])
            {
                array3[l] = array1[j];
                j++;
            }

            else
            {
                array3[l] = array2[k];
                k++;
            }
            cout<<array3[l]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l,m,T,num1,num2,num3;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num1;

        int array1[num1];

        for(j=0 ; j<num1 ; j++)
        {
            cin>>array1[j];
        }

        cout<<"Give a number = ";
        cin>>num2;

        num3 = num1+num2;

        int array2[num2],array3[num3];

        for(k=0 ; k<num2 ; k++)
        {
            cin>>array2[k];
        }

        for(l=0,j=0,k=0 ; l<num3 ; l++)
        {
            if((array1[j]<array2[k] && j<num1) || k>num2-1)
            {
                array3[l] = array1[j];
                //cout<<"j = "<<j<<"->";
                j++;
            }

            else
            {
                array3[l] = array2[k];
                //cout<<"k = "<<k<<"->";
                k++;
            }
            cout<<array3[l]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
How many number you taking = 9
Input : Give a number = 5 1 3 5 7 9
        Give a number = 5 2 3 4 6 8
Output: 1 2 3 3 4 5 6 7 8 9
Input : Give a number = 5 1 3 3 5 7
        Give a number = 5 2 4 6 8 9
Output: 1 2 3 3 4 5 6 7 8 9
Input : Give a number = 5 2 4 6 8 9
        Give a number = 5 1 3 3 5 7
Output: 1 2 3 3 4 5 6 7 8 9
Input : Give a number = 5 1 2 3 3 7
        Give a number = 5 1 3 3 7 7
Output: 1 1 2 3 3 3 3 7 7 7
Input : Give a number = 7 1 1 2 3 3 3 7
        Give a number = 9 1 1 2 2 3 3 7 7 9
Output: 1 1 1 1 2 2 2 3 3 3 3 3 7 7 7 9
*/

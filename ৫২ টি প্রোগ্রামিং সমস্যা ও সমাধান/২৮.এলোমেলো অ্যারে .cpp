#include <iostream>
using namespace std;

int main()
{
    int i,j,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        int array[num];

        for(j=0 ; j<num ; j++)
        {
            cin>>array[j];
        }


        int sorted = 1;


        for(j=0 ; j<num ; j++)
        {
            if(array[j]<array[j+1])
            {
                sorted = 0;
                break;
            }
        }

        if(sorted)
        cout<<"YES"<<endl;

        else
        {
            sorted = 1;

            for(j=0 ; j<num ; j++)
            {
                if(array[j]>array[j+1])
                {
                sorted = 0;
                break;
                }
            }

            if(sorted)
            cout<<"YES"<<endl;
            else
            cout<<"No"<<endl;
        }




        /*
        for(j=0 ; j<num-1 ; j++)
        {
            if(array[j]-array[j+1]>=1)
            {
                cout<<"j1 = "<<j<<endl;
                cout<<"array[j]-array[j+1] = "<<array[j]-array[j+1]<<endl;
                cout<<"No"<<endl;
                //break;
            }

            if(array[j]-array[j+1]==0)
            {
                cout<<"j3 = "<<j<<endl;
                cout<<"array[j]-array[j+1] = "<<array[j]-array[j+1]<<endl;
                cout<<"No"<<endl;
                //break;
            }
            //cout<<array[j]<<" ";
        }
        //cout<<"Yes"<<endl;
        */
    }
    return 0;
}

//1 2 3 4 5
//1 2 3 5 4
//5 4 3 2 1
//5 4 3 1 2

/*
How many number you taking = 5
Input : Give a number = 5
        1 2 3 4 5
Output :1 3 5
Input : Give a number = 10
        1 4 55 66 22 0 76 11 23 78
Output :1 55 22 76 23
Input : Give a number = 10
        11 22 33 44 55 66 77 88 99 100
Output :11 33 55 77 99
Input : Give a number = 5
        20722 501 27356 21714 91241
Output :20722 27356 91241
Input : Give a number = 3
        51010 23119 73950
Output :51010 73950
*/



/*            if(array[j]-array[j+1]>=1 || array[j]-array[j+1]<=-1 || array[j]-array[j+1]==0)

        for(j=0 ; j<num-1 ; j++)
        {
            if(array[j]-array[j+1]!=1 || array[j]-array[j+1]!=1)
            {
                cout<<"j = "<<j<<endl;
                cout<<"array[j]-array[j+1] = "<<array[j]-array[j+1]<<endl;
                cout<<"No"<<endl;
                //break;
            }
            //cout<<array[j]<<" ";
        }
        //cout<<"Yes"<<endl;
*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num;

        int num1[21],num2[21];

        for(j=0; j<=num; j++)
        {
            for(int l=0; l<=num-j; l++)
            {
                cout<<" ";
            }

            if(j%2==0)
            {
                for(k=0 ; k<=j ; k++)
                {
                    //cout<<"j = "<<j<<" "<<"k = "<<k<<endl;
                    if(k==0 || k==j)
                    {
                        num1[k]=1;
                        //cout<<num1[k] << "(up-1)";
                        cout<<num1[k]<< " ";
                    }

                    else
                    {
                        num1[k]=num2[k-1]+num2[k];
                        //cout<<num1[k] << "(up-2)";
                        cout<<num1[k]<< " ";
                    }
                }
            }

            else
            {
                for(k=0 ; k<=j ; k++)
                {
                    //cout<<"j = "<<j<<" "<<"k = "<<k<<endl;
                    if(k==0 || k==j)
                    {
                        num2[k]=1;
                        //cout<<num2[k] << "(do-1)";
                        cout<<num2[k]<< " ";
                    }

                    else
                    {
                        num2[k]=num1[k-1]+num1[k];
                        //cout<<num2[k] << "(do-2)";
                        cout<<num2[k]<< " ";
                    }

                }
            }
            cout<<endl;
        }
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give three number = 4
Output:      1
            1 1
           1 2 1
          1 3 3 1
         1 4 6 4 1
Input : Give three number = 5
Output:       1
             1 1
            1 2 1
           1 3 3 1
          1 4 6 4 1
         1 5 10 10 5 1
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num;

        int num1[21]={1},num2[21]={1,1};

        for(j=0; j<=num; j++)
        {
            if(j%2==0)
            {
                for(k=0 ; k<=j ; k++)
                {
                    if(k==0 || k==j)
                    {
                        num1[k]=1;
                        cout<<num1[k] << " ";
                    }

                    else
                    {
                        num1[k]=num2[k-1]+num2[k];
                        cout<<num1[k] << " ";
                    }
                }
            }

            else
            {
                for(k=0 ; k<=j ; k++)
                {
                    if(k==0 || k==j)
                    {
                        num2[k]=1;
                        cout<<num2[k] << " ";
                    }

                    else
                    {
                        num2[k]=num1[k-1]+num1[k];
                        cout<<num2[k] << " ";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
*/



/*
How many number you taking = 3
Input : Give three number = 3
Output: 1
        1 1
        1 2 1
        1 3 3 1
Input : Give three number = 4
Output: 1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
Input : Give three number = 5
Output: 1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
        1 5 10 10 5 1
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give three number = ";
        cin>>num;

        int odd[21],even[21];

        for(j=0; j<=num; j++)
        {
            if(j%2==0)
            {
                    even[0]=1;
                    cout<<even[0]<< " ";

                    for(k=1 ; k<=j-1 ; k++)
                    {
                        even[k]=odd[k-1]+odd[k];
                        cout<<even[k]<< " ";
                    }

                    if(k!=1)
                    {
                        even[k]=1;
                        cout<<even[k]<< " ";
                    }
            }

            else
            {
                    odd[0]=1;
                    cout<<odd[0]<< " ";

                    for(k=1 ; k<=j-1 ; k++)
                    {
                        odd[k]=even[k-1]+even[k];
                        cout<<odd[k]<< " ";
                    }

                    odd[k]=1;
                    cout<<odd[k]<< " ";
            }
            cout<<endl;
        }
    }
    return 0;
}
*/

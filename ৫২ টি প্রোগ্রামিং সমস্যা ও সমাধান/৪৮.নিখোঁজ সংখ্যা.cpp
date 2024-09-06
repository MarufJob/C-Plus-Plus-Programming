#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num,found;
    int array[1000];

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        for(j=0; j<num-1; j++)
        {
            cin>>array[j];
        }
/*
        for(j=0; j<num-1; j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;
*/

        for(j=1; j<=num; j++)
        {
            found=0;
            for(k=0; k<num-1; k++)
            {
                if(j==array[k])
                {
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
                //cout<<"k = "<<k<<" "<<j<<endl;
                cout<<j<<endl;
                break;
            }
        }
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give a number = 7 2 1 4 6 5 3
Output: 7
Input : Give a number = 9 9 4 5 8 6 1 7 2
Output: 3
Input : Give a number = 5 1 2 4 3
Output: 5
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,n,num,missing;
    int array[1000];

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        for(j=0; j<num; j++) array[j]=0;

        for(j=0; j<num-1; j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;

        for(j=0; j<num-1; j++)
        {
            cin>>n;
            array[n-1]=1;
        }
        cout<<endl;

        for(j=0; j<num; j++)
        {
            cout<<array[j]<<" ";
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
    int i,j,T,num,sum,sum_j,result;
    int array[num];

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        for(j=0; j<num-1; j++)
        {
            cin>>array[j];
        }

        sum=0,sum_j=0;
        for(j=0; j<num-1; j++)
        {
            sum=sum+array[j];
            sum_j=sum_j+(j+1);
        }
        sum_j=sum_j+(j+1);

        result=sum_j-sum;
        cout<<result<<endl;
    }
    return 0;
}
*/








#include <iostream>
using namespace std;

int main()
{
    int i,j,T,num,sum,sum_j,result;
    int array[num];

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        for(j=0; j<num-1; j++)
        {
            cin>>array[j];
        }

        sum=0,sum_j=0;
        for(j=0; j<num-1; j++)
        {
            sum=sum+array[j];
            sum_j=sum_j+(j+1);
            //cout<<"j = "<<j<<"  "<<"array[j] = "<<array[j]<<" -> "<<sum<<endl;
            //cout<<"j = "<<j<<"  "<<"(j+1) = "<<(j+1)<<" -> "<<sum_j<<endl;
        }
        sum_j=sum_j+(j+1);
        //cout<<"j = "<<j<<"  "<<"(j+1) = "<<(j+1)<<" -> "<<sum_j<<endl;

        result=sum_j-sum;
        cout<<result<<endl;
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give a number = 7 2 1 4 6 5 3
Output: 7
Input : Give a number = 9 9 4 5 8 6 1 7 2
Output: 3
Input : Give a number = 5 1 2 4 3
Output: 5
*/


/*
How many number you taking = 7
Give a number = 5
4 2 3 1
j = 0  array[j] = 4 -> 4
j = 0  (j+1) = 1 -> 1
j = 1  array[j] = 2 -> 6
j = 1  (j+1) = 2 -> 3
j = 2  array[j] = 3 -> 9
j = 2  (j+1) = 3 -> 6
j = 3  array[j] = 1 -> 10
j = 3  (j+1) = 4 -> 10
j = 4  (j+1) = 5 -> 15
5
Give a number = 7
4 6 5 3 7 2
j = 0  array[j] = 4 -> 4
j = 0  (j+1) = 1 -> 1
j = 1  array[j] = 6 -> 10
j = 1  (j+1) = 2 -> 3
j = 2  array[j] = 5 -> 15
j = 2  (j+1) = 3 -> 6
j = 3  array[j] = 3 -> 18
j = 3  (j+1) = 4 -> 10
j = 4  array[j] = 7 -> 25
j = 4  (j+1) = 5 -> 15
j = 5  array[j] = 2 -> 27
j = 5  (j+1) = 6 -> 21
j = 6  (j+1) = 7 -> 28
1
Give a number = 6 6 5 3 2 1
j = 0  array[j] = 6 -> 6
j = 0  (j+1) = 1 -> 1
j = 1  array[j] = 5 -> 11
j = 1  (j+1) = 2 -> 3
j = 2  array[j] = 3 -> 14
j = 2  (j+1) = 3 -> 6
j = 3  array[j] = 2 -> 16
j = 3  (j+1) = 4 -> 10
j = 4  array[j] = 1 -> 17
j = 4  (j+1) = 5 -> 15
j = 5  (j+1) = 6 -> 21
4
*/



#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num,sum,sum_j,result;
    char array[1000];

    cout<<"How many number you taking = ";
    cin>>T;
    cin.ignore();

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        cin.get(array,1000);
/*
        for(j=0; j<num-1; j++)
        {
            cin>>array[j];
        }
*/
        for(j=0; j<num-1; j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;

        sum=0,sum_j=0,k=1;
        for(j=0; j<num-1; j++)
        {
            sum=sum+array[j];
            sum_j=sum_j+k;

            //cout<<"j = "<<j<<"  "<<"array[j] = "<<array[j]<<" -> "<<sum<<endl;
            //cout<<"j = "<<j<<"  "<<"(j+1) = "<<(j+1)<<" -> "<<sum_j<<endl;
        }
        sum_j=sum_j+k;
        //cout<<"j = "<<j<<"  "<<"(j+1) = "<<(j+1)<<" -> "<<sum_j<<endl;

        result=sum_j-sum;
        cout<<result<<endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int i,j,k,T,num,sum,sum_j,result;
    int array[num];

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        for(j=0; j<num-1; j++)
        {
            cin>>array[j];
        }

        for(j=0; j<num-1; j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;

        sum=0,sum_j=0,k=1;
        for(j=0; j<num-1; j++)
        {
            sum=sum+array[j];
            sum_j=sum_j+k;
            k++;
            //cout<<"j = "<<j<<"  "<<"array[j] = "<<array[j]<<" -> "<<sum<<endl;
            //cout<<"j = "<<j<<"  "<<"(j+1) = "<<(j+1)<<" -> "<<sum_j<<endl;
        }
        sum_j=sum_j+k;
        //cout<<"j = "<<j<<"  "<<"(j+1) = "<<(j+1)<<" -> "<<sum_j<<endl;

        result=sum_j-sum;
        cout<<result<<endl;
    }
    return 0;
}

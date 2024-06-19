#include <iostream>

using namespace std;

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

       for(j=1 ; j<=num ; j++)
       {
            for(k=1 ; k<=num ; k++)
            {
              cout<<"*";
            }
            cout<<endl;
       }
       cout<<endl;
    }
    return 0;
}


/*
How many number you taking = 3
Input :Give a number = 1
Output :*

Input :Give a number = 3
Output :***
        ***
        ***

Input :Give a number = 5
Output :*****
        *****
        *****
        *****
        *****
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
        cout<<"Give a number = ";
        cin>>num;

            string row(num,'*');
            
            for(k=1 ; k<=num ; k++)
            {
                //cout<<row<<endl;
                cout << row << '\n';
            }
    }
    return 0;
}
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
        cout<<"Give a number = ";
        cin>>num;

        string row(num,'*');
        
        j=1;
        while(j<=num)
        {
            //cout<<row<<endl;
            cout << row << '\n';
            j++;
        }
    }
    return 0;
}
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
        cout<<"Give a number = ";
        cin>>num;

        string row(num,'*');
        
        j=1;
        do
        {
            //cout<<row<<endl;
            cout << row << '\n';
            j++;
        }while(j<=num);
    }
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

void myFunction(int num)
{
    string row(num,'*');
    
    for(int k=1 ; k<=num ; k++)
    {
        //cout<<row<<endl;
        cout << row << '\n';
    }
}

int main()
{
    int i,j,k,T,num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;
        
        myFunction(num);
    }
    
    return 0;
}
*/

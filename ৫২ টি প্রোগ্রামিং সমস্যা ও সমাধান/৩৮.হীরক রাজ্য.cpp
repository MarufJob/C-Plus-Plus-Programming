#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l,num,T;
    char ch;

    cout<<"How many number you taking = ";
    cin>>T;
    cin.ignore(); // Consume the newline character

    while(T--)
    {
        cout<<"Give two number = ";
        cin>>num>>ch;
        //getline(cin,str);


        for(i=1; i<=num; i++)
        {
            for(j=1; j<=i; j++)
            {
                cout<<ch<<" ";
            }
            cout<<endl;
        }
        
        for(k=num-1; k>=1; k--)
        {
            for(l=k; l>=1; l--)
            {
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give two number = 3 1
Output: 1
        1 1
        1 1 1
        1 1
        1
Input : Give two number = 5 2
Output: 2
        2 2
        2 2 2
        2 2 2 2
        2 2 2 2 2
        2 2 2 2
        2 2 2
        2 2
        2
Input : Give two number = 7 3
Output: 3
        3 3
        3 3 3
        3 3 3 3
        3 3 3 3 3
        3 3 3 3 3 3
        3 3 3 3 3 3 3
        3 3 3 3 3 3
        3 3 3 3 3
        3 3 3 3
        3 3 3
        3 3
        3
*/

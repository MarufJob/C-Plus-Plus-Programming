#include <iostream>
using namespace std;

int main()
{
    int num,rev,T;

    cout<<"How many number you taking = ";
    cin>>T;

    while(T--)
    {
        cout<<"Give a number = ";
        cin>>num;

        rev=0;

        while(num!=0)
        {
            rev*=10;
            rev+=num%10;
            num/=10;
        }
        cout<<rev<<endl;
    }
    return 0;
}



/*
How many number you taking = 3
Input : Give a number = 612
Output: 216
Input : Give a number = 1431056
Output: 6501341
Input : Give a number = 10041992
Output: 29914001
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,num,leanth,T;
    string str;

    cout<<"How many number you taking = ";
    cin>>T;
    cin.ignore(); // Consume the newline character

    while(T--)
    {
        cout<<"Give a number = ";
        getline(cin,str);

        leanth=str.size();

        for(i=leanth-1; i>=0; i--)
        {
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
*/

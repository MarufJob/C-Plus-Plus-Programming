#include <iostream>
using namespace std;

int main()
{
    int i,T;
    char str[100];
    int num1;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin.get(str, 100);

        num1 = str.length();
        cout<<num1<<endl;

        // if(num1=='0'||num1=='2'||num1=='4'||num1=='6'||num1=='8')
        // {
        //     cout<<"even"<<endl;
        // }
        // else
        // {
        //     cout<<"odd"<<endl;
        // }
    }
    
    return 0;
}

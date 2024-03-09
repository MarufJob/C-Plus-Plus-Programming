#include <iostream>

using namespace std;

int main()
{
    int T,i,j,k,nth,num=0,num1;
    //long long int temp;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        //temp=1;
        cout<<"Give a number = ";
        cin>>nth;

        for(j=0 ; j<=nth ; j=j+5)
        {

            //temp = j*temp;
            //num=j
            // for(j=0 ; j<=nth ; j+=5)
            // {
                
            // num=j
            // }
            if(j%5==0){
                num=num+1;
                num1=j%5;
                if(num1%5==0)
                {
                    num=num+1;
                }
            }
        }

       cout<<num<<endl;
    }

    return 0;
}

/*
How many number you taking = 3
Give a number = 6
720
Give a number = 10
3628800
Give a number = 15
1307674368000
*/
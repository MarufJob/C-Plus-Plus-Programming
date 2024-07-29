#include <iostream>
using namespace std;

int main()
{
    int i,T,num,num_part,power,sum,temp,temp_num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        cout<<"Give a number = ";
        cin>>num;

        temp_num=num;
        sum=0;

        while(num>=1)
        {
            power=2;
            num_part=num%10;
            num=num/10;
            //cout<<num_part<<endl;

            temp=num_part;
            while(power--)
            {
                num_part=num_part*temp;
            }
            sum=sum+num_part;
            //cout<<sum<<endl;
        }
        //cout<<sum<<endl;

        if(temp_num==sum)
        cout<<temp_num<<" is an armstrong number!"<<endl;
        else
        cout<<temp_num<<" is not an armstrong number!"<<endl;
    }
    return 0;
}



/*
How many number you taking = 5
Input : Give a number = 100
Output: 100 is not an armstrong number!
Input : Give a number = 153
Output: 153 is an armstrong number!
Input : Give a number = 371
Output: 371 is an armstrong number!
Input : Give a number = 467
Output: 467 is not an armstrong number!
Input : Give a number = 521
Output: 521 is not an armstrong number!
*/




/*
#include <iostream>
using namespace std;

int main()
{
    int i,T,num,num_part,power,sum,temp,temp_num;

    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        //cout<<"Give a number = ";
        //cin>>num;


        for(int j=100; j<=999; j++)
        {
            num=j;
            temp_num=num;
            sum=0;

            while(num>=1)
            {
                power=2;
                num_part=num%10;
                num=num/10;
                //cout<<num_part<<endl;

                temp=num_part;
                while(power--)
                {
                    num_part=num_part*temp;
                }
                sum=sum+num_part;
                //cout<<sum<<endl;
            }
            //cout<<sum<<endl;

            if(temp_num==sum)
            cout<<temp_num<<" is an armstrong number!"<<endl;
            //else
            //cout<<temp_num<<" is not an armstrong number!"<<endl;
        }

    }
    return 0;
}
*/



/*
153 is an armstrong number!
370 is an armstrong number!
371 is an armstrong number!
407 is an armstrong number!
*/

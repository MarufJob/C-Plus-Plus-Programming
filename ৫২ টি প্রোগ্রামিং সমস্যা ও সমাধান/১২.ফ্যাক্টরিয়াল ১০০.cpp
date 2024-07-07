#include <iostream>
using namespace std;

int main()
{
    int i,j,T,count,mod,num;
    
    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        count=0;
        cout<<"Give a number = ";
        cin>>num;

        for(j=5; j<=num; j=j+5)
        {
            if(j%5==0)
            {
                count++;
                mod=j/5;
                if(mod%5==0)
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}


/*
if(mod%5==0) -> 25!,50!,75!,100!

5! = 5 = 1
10! = 5 -> (5*2) = 2
15! = 5 -> (5*2) -> (5*3) = 3
20! = 5 -> (5*2) -> (5*3) -> (5*4) = 4
25! = 5 -> (5*2) -> (5*3) -> (5*4) -> (5*5) = 5+1 = 6

but not work for
125! = 25+5+1 = 31
250! = 50+10+2 = 62
375! = 75+15+3 = 93
*/



/*
How many number you taking = 3
Input :Give a number = 6
Output:1
Input :Give a number = 15
Output:3
Input :Give a number = 24
Output:4
Input :Give a number = 25
Output:6
Input :Give a number = 100
Output:24
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,j,T,count,mod,num;
    
    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        count=0;
        cout<<"Give a number = ";
        cin>>num;

        for(j=5; j<=num; j=j+5)
        {
                mod=j;
                while(mod%5==0)
                {
                    count++;
                    mod=mod/5;
                }
        }
        cout<<count<<endl;
    }
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int T, num;
    int iteration;

    cout << "How many numbers are you taking = ";
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        cout << "Give a number = ";
        cin >> num;

        int count = 0,iteration = 0;
        for (int j = 5; num/j >= 1; j = j*5)
        {
            count += num/j;
            //iteration++;
            //cout <<"j = "<< j << endl;
        
        }
        cout << count << endl;
        //cout << "Iteration = "<< iteration << endl;
    }
    return 0;
}
*/



/*
How many number you taking = 3
Input :Give a number = 125
Output: j = 5   ->  125/5   = 25
        j = 25  ->  125/25  =  5
        j = 125 ->  125/125 =  1
                              31
        Iteration = 3
Input :Give a number = 375
Output: j = 5   ->  375/5    = 75
        j = 25  ->  375/25   = 15
        j = 125 ->  375/125  =  3
                               93
        Iteration = 3
Input :Give a number = 625
Output: j = 5   ->  625/5   = 125
        j = 25  ->  625/25  =  25
        j = 125 ->  625/125 =   5
        j = 625 ->  625/625 =   1
                              156
        Iteration = 4
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int i,T,count,num;
    
    cout<<"How many number you taking = ";
    cin>>T;

    for(i=1 ; i<=T ; i++)
    {
        count=0;
        cout<<"Give a number = ";
        cin>>num;

        while(num>=5)
        {
            count+=num/5;
            num=num/5;
        }
        cout<<count<<endl;
    }
    return 0;
}
*/



/*
How many number you taking = 3
Give a number = 125
31
Give a number = 250
62
Give a number = 375
93
*/

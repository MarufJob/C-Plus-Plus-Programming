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

        cout<<"Case "<<i<<":";
       for(j=1 ; j<=num ; j++)
       {
            if(num%j==0)
            cout<<" "<<j;
       }
       cout<<endl;
    }

    return 0;
}

/*
How many number you taking = 3
Input :Give a number = 6
Output :Case 1: 1 2 3 6

Input :Give a number = 15
Output :Case 2: 1 3 5 15

Input :Give a number = 23
Output :Case 3: 1 23
/*



/*
#include <iostream>
#include <cmath> // For sqrt function
#include <vector> // For storing factors
#include <algorithm>

using namespace std;

int main()
{
    int T, num;

    cout << "How many numbers are you taking = ";
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        cout << "Give a number = ";
        cin >> num;

        cout << "Case " << i << ":";
        
        vector<int> factors;
        int sqrtNum = sqrt(num);

        // Find factors up to sqrt(num)
        for (int j = 1; j <= sqrtNum; ++j)
        {
            if (num % j == 0)
            {
                factors.push_back(j);
                if (j != num / j) // Avoid adding the square root twice if num is a perfect square
                {
                    factors.push_back(num / j);
                }
            }
        }

        // Sort the factors before printing
        sort(factors.begin(), factors.end());

        // Print factors
        for (int factor : factors)
        {
            cout << " " << factor;
        }
        
        cout << endl;
    }

    return 0;
}
*/

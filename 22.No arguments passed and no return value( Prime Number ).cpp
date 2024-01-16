# include <iostream>
using namespace std;

void prime();

int main()
{
    // No argument is passed to prime()
    prime();
    return 0;
}


// Return type of function is void because value is not returned.
void prime()
{

    int num, i, flag = 0;

    cout << "Enter a positive integer enter to check: ";
    cin >> num;
    
    //void not return;
    // if(num <= 0){
    //     cout << "This is an invalid number.";
    //     return 0;
    // }

    for(i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1; 
            break;
        }
    }

    if (flag == 1)
    {
        cout << num << " is not a prime number.";
    }
    else
    {
        cout << num << " is a prime number.";
    }
}
/*
Input:Enter a positive integer enter to check: 7
Output:7 is a prime number.

Input:Enter a positive integer enter to check: 19
Output:19 is a prime number.

Input:Enter a positive integer enter to check: 50
Output:50 is not a prime number.
*/

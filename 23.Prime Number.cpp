# include <iostream>
using namespace std;


int main()
{
    
    int num, i, flag = 0;

    cout << "Enter a positive integer enter to check: ";
    cin >> num;
    
    if(num <= 0){
        cout << "This is an invalid number.";
        return 0;
    }

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
    
    return 0;
}

/*
Input:Enter a positive integer enter to check: 7
Output:7 is a prime number.

Input:Enter a positive integer enter to check: -5
Output:This is an invalid number.

Input:Enter a positive integer enter to check: 50
Output:50 is not a prime number.
*/

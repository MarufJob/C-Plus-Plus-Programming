#include <iostream>
using namespace std;

int main()
{
    int i, T;
    char str[1000];
    char c;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        cin.get(str, 100);
        cin.ignore(); // Consume the newline character after inputting the string
        // cin >> c;
        // cin.ignore();

        for(int i=97 ; i<=122 ; i++)
        {
            c=i;
            int count = 0;
            for (int j = 0; str[j] != '\0'; j++)
            {
                if (str[j] == c)
                {
                    count++;
                }
            }
            if(count>0)
            cout <<c<<" = "<<count<< endl;
            // else
            // cout<<"'"<<c<<"'"<<" is not present"<<endl;
            
        }
    }
    return 0;
}



/*
How many input are you taking = 3
Input: Give a string: hello
Output:e = 1
       h = 1
       l = 2
       o = 1
Input: Give a string: baby
Output:a = 1
       b = 2
       y = 1
Input: Give a string: programming
Output:a = 1
       g = 2
       i = 1
       m = 2
       n = 1
       o = 1
       p = 1
       r = 2
*/
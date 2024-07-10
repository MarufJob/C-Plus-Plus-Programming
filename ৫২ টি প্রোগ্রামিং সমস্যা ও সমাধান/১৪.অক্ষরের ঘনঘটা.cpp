#include <iostream>
using namespace std;

int main()
{
    int i, T;
    char str[10000];
    char c;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        int count = 0;
        cout << "Give a string: ";
        cin.get(str, 100);
        cin.ignore(); // Consume the newline character after inputting the string
        cin >> c;
        cin.ignore();

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == c)
            {
                count++;
            }
        }
        
        if(count>0)
        cout <<"Occurrence of " <<"'"<<c<<"'"<<" in "<<"'"<<str<<"' = "<<count<< endl;
        else
        cout<<"'"<<c<<"'"<<" is not present"<<endl;
    }
    return 0;
}



/*
How many input are you taking = 2
Input: Give a string: hello world
       l
Output:Occurrence of 'l' in 'hello world' = 3
Input: Give a string: hello world
       a
Output:'a' is not present
*/




/*
#include <iostream>
using namespace std;

int main()
{
    int i, T;
    string str;
    char c;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        int count = 0;
        cout << "Give a string: ";
        getline(cin,str);
        cin >> c;
        cin.ignore();

        for (char i : str)
        {
            if (i == c)
            {
                count++;
            }
            //cout<<i<<endl;
        }
        
        if(count>0)
        cout <<"Occurrence of " <<"'"<<c<<"'"<<" in "<<"'"<<str<<"' = "<<count<< endl;
        else
        cout<<"'"<<c<<"'"<<" is not present"<<endl;
    }
    return 0;
}
*/



/*
How many input are you taking = 2
Input: Give a string: hello world
       l
Output:Occurrence of 'l' in 'hello world' = 3
Input: Give a string: hello world
       a
Output:'a' is not present
*/



/*
#include <iostream>
using namespace std;

int Count(string str, char c)
{
    int count = 0;
    for (char i : str)
        {
            if (i == c)
            {
                count++;
            }
            //cout<<i<<endl;
        }
    return count;
}

int main()
{
    int i, T;
    string str;
    char c;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        int num = 0;
        cout << "Give a string: ";
        getline(cin,str);
        cin >> c;
        cin.ignore();

        int count = Count(str,c);
        
        if(count>0)
        cout <<"Occurrence of " <<"'"<<c<<"'"<<" in "<<"'"<<str<<"' = "<<count<< endl;
        else
        cout<<"'"<<c<<"'"<<" is not present"<<endl;
    }
    return 0;
}
*/

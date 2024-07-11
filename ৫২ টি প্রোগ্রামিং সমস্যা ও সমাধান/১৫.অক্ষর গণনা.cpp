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
        cin.get(str, 1000);
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



/*
#include <iostream>
using namespace std;

int main()
{
    int i, T;
    //char str[1000];
    string str;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        // cin.get(str, 1000);
        // cin.ignore(); // Consume the newline character after inputting the string
        getline(cin,str);
        int count[26]={};
        
            for (int j = 0; str[j] != '\0'; j++)
            {
                if (str[j] >= 'a' && str[j] <= 'z')
                {
                     count[str[j]-'a']++;
                }
            }
            
        for(int i=0 ; i<=25 ; i++)
        {
            if(count[i]>0)
            {
                char c='a'+i;
                cout <<c<<" = "<<count[i]<< endl;
            }
        }
    }
    return 0;
}

*/



/*
#include <iostream>
//#include <cctype> //For tolower function
using namespace std;

int main()
{
    int i, T;
    //char str[1000];
    string str;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        getline(cin,str);
        int count[26]={};
        
        //for (int c:str)
        for (char c:str)
        {
            char lowerCh = tolower(c);
            
            if (lowerCh >= 'a' && lowerCh <= 'z')
            {
                 count[lowerCh-'a']++;
            }
        }
            
        for(int i=0 ; i<=25 ; i++)
        {
            if(count[i]>0)
            {
                char c='a'+i;
                cout <<c<<" = "<<count[i]<< endl;
            }
        }
        
    }
    return 0;
}

*/


/*
How many input are you taking = 3
Input: Give a string: Hello, hi
Output: e = 1
        h = 2
        i = 1
        l = 2
        o = 1
Input: Give a string: BABY boy
Output: a = 1
        b = 3
        o = 1
        y = 2
Input: Give a string: Programming Rock
Output: a = 1
        c = 1
        g = 2
        i = 1
        k = 1
        m = 2
        n = 1
        o = 2
        p = 1
        r = 3
*/



/*
#include <iostream>
//#include <cctype> //For tolower function
using namespace std;

void characterCount(string str, int *count, int size)   //array passed in a function (int *count, int size)
{
    //for (int c:str)
    for (char c:str)
    {
        char lowerCh = tolower(c);
        
        if (lowerCh >= 'a' && lowerCh <= 'z')
        {
             count[lowerCh-'a']++;
        }
    }
        
    for(int i=0 ; i<=25 ; i++)
    {
        if(count[i]>0)
        {
            char c='a'+i;
            cout <<c<<" = "<<count[i]<< endl;
        }
    }
}

int main()
{
    int i, T;
    //char str[1000];
    string str;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        getline(cin,str);
        int count[26]={};
        
        characterCount(str, count, 26); //array passed in a function count, 26;
    }
    return 0;
}
*/

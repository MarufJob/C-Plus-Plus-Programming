#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, T;
    //char str[1000];

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    //for (i = 1; i <= T; i++)
    while(T--)
    {
        int s_len=0;
        cout << "Give a string: ";
        char str[1000]={};
        cin.get(str, 1000);
        cin.ignore(); // Consume the newline character after inputting the string
        
        s_len=strlen(str);
        
        //s_len=sizeof(str)/sizeof(str[0]);//s_len = 1000 ->sizeof(arr) returns the total memory arr is taking
        //cout<<s_len<<endl;
        
        
            for (int j = s_len-1; j >= 0; j--)
            {
                cout<<str[j];
            }
            cout<<endl;
    }
    return 0;
}



/*
How many input are you taking = 5
Input: Give a string: string
Output:gnirts
Input: Give a string: programming
Output:gnimmargorp
Input: Give a string: Aruna
Output:anurA
Input: Give a string: theygaveabigpartyforme
Output:emrofytrapgibaevagyeht
Input: Give a string: shewastwentytwoyearsold
Output:dlosraeyowtytnewtsawehs
*/



/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, T;
    //char str[1000];

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    //for (i = 1; i <= T; i++)
    while(T--)
    {
        int s_len=0;
        cout << "Give a string: ";
        char str[1000]={};
        cin.get(str, 1000);
        cin.ignore(); // Consume the newline character after inputting the string
        
        s_len=strlen(str);
        
        //cout<<s_len<<endl;
        
        
            for (int j = s_len-1, i=0; i<j ; j--,i++)
            {
                swap(str[i],str[j]);
            }
            cout<<str<<endl;
    }
    return 0;
}
*/




/*
#include <iostream>
#include <cstring>
using namespace std;

// void swap(char str[])
//void swap(char* str);
//void swap(char str[],int s_len);
void swap(char *str,int s_len);

int main()
{
    int i, T;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    while(T--)
    {
        int s_len=0;
        cout << "Give a string: ";
        char str[1000]={};
        cin.get(str, 1000);
        cin.ignore(); // Consume the newline character after inputting the string
        
        s_len=strlen(str);   //for character array
        
        swap(str,s_len);
    }
    return 0;
}

void swap(char *str,int s_len)
{
    for (int j = s_len-1, i=0; i<j ; j--,i++)
    {
        swap(str[i],str[j]);
    }
    cout<<str<<endl;
}
*/



/*
#include <iostream>
#include <cstring>
using namespace std;

//void swap(string str);
//void swap(string& str);
void swap(string str,int s_len);

int main()
{
    int i, T;

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    while(T--)
    {
        int s_len=0;
        cout << "Give a string: ";
        string str;
        getline(cin,str);
        
        s_len=str.size();   //for string
        //s_len=str.length();
        cout<<s_len<<endl;
        
        swap(str,s_len);
    }
    return 0;
}

void swap(string str,int s_len)
{
    for (int j = s_len-1, i=0; i<j ; j--,i++)
    {
        swap(str[i],str[j]);
    }
    cout<<str<<endl;
}
*/

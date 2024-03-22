#include <iostream>
using namespace std;

int main()
{
    int i, T;
    //char str[1000];

    cout << "How many input are you taking = ";
    cin >> T;
    cin.ignore(); // Consume the newline character

    for (i = 1; i <= T; i++)
    {
        cout << "Give a string: ";
        char str[1000]={};
        cin.get(str, 1000);
        cin.ignore(); // Consume the newline character after inputting the string
        
            for (int j = 0; str[j] != '\0'; j++)
            {
                //cout <<"line j = "<<j<<endl;
                if (str[j] == ' '|| str[j+1] == '\0')
                {
                    if(str[j+1] == '\0')
                    j++;
                  for(int k=j-1 ; k!=' ' ; k--)
                    {
                        //cout <<"line k = "<<k<<endl;
                        if(k<0||str[k]==' ')
                        {
                            if(str[j+1] == '\0')
                            break;
                            cout<<' ';
                            break;
                        }
                         cout <<str[k];
                        //cout<<endl;
                    }
                }
            }
            cout<<endl;
    }
    return 0;
}



/*
How many input are you taking = 4
Input: Give a string: This is a test
Output:sihT si a tset
Input: Give a string: Hello World
Output:olleH dlroW
Input: Give a string: don't underestimate the
Output:t'nod etamitserednu eht
Input: Give a string: power of a girl
Output:rewop fo a lrig
*/
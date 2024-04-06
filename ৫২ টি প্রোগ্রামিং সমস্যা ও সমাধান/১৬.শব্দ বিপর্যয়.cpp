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

/*
#include <iostream>
#include <cstring> // for strlen (safer than manual null termination check)
#include <algorithm> // for std::reverse

using namespace std;

int main() {
  int T;

  cout << "How many inputs are you taking = ";
  cin >> T;
  cin.ignore(); // Consume the newline character

  for (int i = 1; i <= T; i++) {
    cout << "Give a string: ";
    char str[1000];
    cin.getline(str, 1000); // Safer way to read strings (avoids buffer overflow)

    int len = strlen(str); // Get the length of the string

    // Reverse individual words in-place
    for (int j = 0, start = 0; j <= len; j++) {
      if (str[j] == ' ' || str[j] == '\0') {
        reverse(str + start, str + j); // Reverse the current word
        start = j + 1;
      }
    }

    cout << str << endl;
  }

  return 0;
}
*/



/*
#include <iostream>
#include <cstring>
//#include <string>

using namespace std;

int main() {
    int i, j, k, t, s_len;
    char S[1002],word[1002];
    
    cout << "How many input are you taking = ";
    cin>>t;
    cin.ignore(); // Consume the newline character after inputting the string
    
    for(i = 0; i < t; i++)
    {
        cout << "Enter a string: ";
        
        //cin.getline(S, 1002);
        
        cin.get(S, 1002);
        cin.ignore(); // Consume the newline character after inputting the string
        
        s_len = strlen(S);
        
        for(j=0, k=0; j<s_len; j++)
        {
            if(S[j]!= ' ')
            {
                word[k] = S[j];
                k++;
            }
            else if (k > 0)
            {
                word[k] = '\0';
                cout<<word;
                k = 0;
            }
        }
        if (k>0)
        {
            word[k]='\0';
            cout<<word;
        }
    }

    return 0;
}

void print_reverse(char str[])
{
    int i;
    for (i = strlen(str) - 1; i>=0; i--)
    {
        cout<<str[i];
    }
}
*/

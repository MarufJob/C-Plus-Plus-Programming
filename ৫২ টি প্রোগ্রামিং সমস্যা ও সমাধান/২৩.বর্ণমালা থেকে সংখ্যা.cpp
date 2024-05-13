#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j,S_len;
    char S[100];
    
    cout<<"How many input are you taking = ";
    cin>>t;
    cin.ignore();// Consume the newline character after inputting the string
    
    for(i=0 ; i<t ; i++)
    {
        int num = 0;
        int A = 64;
        //int A = 65;
        
        cout<<"Enter a string: ";
        
        //cin.getline(S,250);
        cin.get(S,100);
        cin.ignore();// Consume the newline character after inputting the string
        
        
        S_len = strlen(S);
        
        //for(j=0 ; S[j]!='\0' ; j++)
        for(j=0 ; j<S_len ; j++)
        {
            if(S[j]>='A' && S[j]<='Z')
            {
               num=S[j]-A;
               //num=S[j]-A+1;
               cout<<num;
            }
        }
           cout<<endl;
     }
    return 0;
}



/*
How many input are you taking = 3
Input :Enter a string: ABZ
Output:Count = 1226
Input :Enter a string: ZYB
Output:Count = 26252
Input :Enter a string: CODING
Output:Count = 31549147
Input :Enter a string: THEYGAVEABIGPARTYFORME
Output:Count = 20852571225129716118202561518135
Input :Enter a string: SHEWASTWENTYTWOYEARSOLD
Output:Count = 198523119202351420252023152551181915124
*/




/*
#include <iostream>
#include <cctype> // For isupper function
#include <cstring> // For strlen function

using namespace std;

int main() {
    int t;
    cout << "How many input are you taking = ";
    cin >> t;
    cin.ignore(); // Consume the newline character after inputting the string

    for (int i = 0; i < t; i++) {
        char S[100];
        cout << "Enter a string: ";
        cin.get(S, 100);
        cin.ignore(); // Consume the newline character after inputting the string

        int num = 0,count=0;
        for (size_t j = 0; j < strlen(S); j++) 
        {
            if (isupper(S[j])) //Used isupper() function from <cctype> to check if a character is uppercase.
            {
                num = S[j] - 'A' + 1;
                cout << num;
            }
            //count++;
        }
        //cout <<count<< endl;
        cout << endl;
    }

    return 0;
}
*/



/*
for (size_t j = 0; j < strlen(S); j++)
in this line why use size_t?


Sure! Let's break it down:

Unsigned Type: size_t is a type that can only represent non-negative numbers (0 and positive integers). This makes sense for loop counters because you typically don't want negative counts. For example, you can't have -1 characters in a string!

Memory Sizes and Indices: Functions like strlen() return the length of strings as size_t. So, when you're looping over characters in a string using strlen() to determine the length, it's natural to use size_t for the loop counter to match the type of the return value.

Compatibility: The C++ standard library uses size_t extensively for sizes and indices. Using it for your loop counters makes your code compatible with these standard library functions and idioms, ensuring consistency and interoperability.

Efficiency: size_t is typically defined as an unsigned integer of the same size as a memory pointer on a given platform. Using size_t ensures that your loop counters have enough range to represent the sizes and indices efficiently. It also avoids unnecessary type conversions, which can improve performance.

In simpler terms, using size_t for loop counters in situations involving sizes and indices is like using the right tool for the job. It ensures that your loop counters are always positive, matches the types returned by functions like strlen(), plays well with standard library functions, and is efficient for representing sizes and indices.
*/

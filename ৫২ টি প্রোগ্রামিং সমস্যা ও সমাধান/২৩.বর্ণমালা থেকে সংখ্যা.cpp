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
using namespace std;

int main() {
    int t;
    cout << "How many input are you taking = ";
    cin >> t;
    cin.ignore(); // Consume the newline character after inputting the string

    for (int i = 0; i < t; i++) {
        string str;
        cout << "Enter a string: ";
        getline(cin,str);
        
        int num = 0;

        for (char c:str) 
        {
            if (c>='A' && c<='Z')
            {
                num = c - 'A' + 1;
                cout << num;
            }
        }
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



/*
#include <iostream>
#include <cctype> // For isupper function
#include <cstring> // For strlen function

using namespace std;

int main() {
    int t;
    cout << "How many inputs are you taking = ";
    cin >> t;
    cin.ignore(); // Consume the newline character after inputting the string

    for (int i = 0; i < t; i++) {
        char S[100];
        cout << "Enter a string: ";
        cin.getline(S, 100); // Use getline to read the whole line, including spaces

        int num = 0;
        //size_t len = strlen(S);//Using size_t for the variable len is a good practice because size_t is an unsigned integer type defined in the C and C++ standard libraries
        int len = strlen(S);

        for (size_t j = 0; j < len; j++) {
            if (isupper(S[j])) { // Check if the character is uppercase
                num = S[j] - 'A' + 1;
                cout << num;
            }
        }
        cout << endl;
    }

    return 0;
}
*/



/*
Using size_t for the variable len is a good practice because size_t is an unsigned integer type defined in the C and C++ standard libraries, specifically designed to represent sizes of objects in bytes and array indexing. It is returned by the strlen function and other size-related functions.

Here’s why using size_t is recommended:

Standard Return Type: Functions like strlen return a value of type size_t. Using size_t for the variable that stores this return value ensures compatibility.
Portability: size_t is defined in such a way that it can hold the size of the largest possible object on the target platform. This makes the code more portable and less prone to errors when compiled on different platforms.
Non-Negative Values: Since size_t is an unsigned type, it cannot represent negative values, which makes it suitable for array indexing and size calculations, where negative values don’t make sense.
Optimization: Some compilers and standard libraries can perform better optimizations when size_t is used because it aligns with their internal handling of sizes and array indices.
*/

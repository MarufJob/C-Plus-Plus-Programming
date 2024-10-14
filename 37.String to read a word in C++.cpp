#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;

    return 0;
}



/*
Input: Enter a string: Maruf
Output: You entered: Maruf

Input: Enter another string: My name is Maruf
Output: You entered: My

Notice that, in the second example only "My" is displayed instead of "My name is Maruf".

This is because the extraction operator >> works as scanf() in C and considers a space " " has a terminating character.
*/



/*
//স্পেস দিয়ে দুটি আলাদা স্ট্রিং নেওয়ার জন্য নিচে একটি C++ প্রোগ্রাম দেয়া হলো যেখানে প্রতিটি স্ট্রিংয়ের দৈর্ঘ্য 128-এর কম হতে হবে।


#include <iostream>
#include <cstring>  // For using string functions like strcpy
using namespace std;

int main() {
    char str1[128], str2[128];  // Arrays to store two strings

    cout << "Enter two strings separated by space: ";
    
    // Taking two strings as input separated by space
    cin >> str1 >> str2;

    // Display the input strings
    cout << "First String: " << str1 << endl;
    cout << "Second String: " << str2 << endl;

    return 0;
}



Enter two strings separated by space: Fazley Maruf
First String: Fazley
Second String: Maruf



ব্যাখ্যা:
1.char str1[128], str2[128];: এখানে আমরা দুইটি অ্যারে ডিক্লেয়ার করেছি, প্রতিটি অ্যারের সাইজ 128, যাতে প্রতিটি স্ট্রিং ধারণ করতে পারে।
2.cin >> str1 >> str2;: cin ব্যবহার করে আমরা একবারে দুইটি স্ট্রিং ইনপুট নিচ্ছি, যেগুলো একটি স্পেস দিয়ে আলাদা করা থাকবে।
3.তারপর আমরা স্ট্রিংগুলোকে প্রদর্শন করছি।
*/




/*
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter two strings separated by space: ";
    cin >> str1 >> str2;

    // Display the strings
    cout << "First String: " << str1 << endl;
    cout << "Second String: " << str2 << endl;

    return 0;
}



Enter two strings separated by space: Fazley Maruf
First String: Fazley
Second String: Maruf
*/

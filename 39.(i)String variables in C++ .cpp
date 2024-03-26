//String in C++
#include<iostream>
using namespace std;

int main()
{
    //C Style string
    char str[]="Md.Fazley Atif Maruf";
    char str1[]={'M','d','.',' ','F','a','z','l','e','y',' ','A','t','i','f',' ','M','a','r','u','f','\0'};
    const char *str2="Md. Fazley Atif Maruf";

    cout<<"str = "<<str<<endl;
    cout<<"str1 = "<<str1<<endl;
    cout<<"str2 = "<<str2<<endl<<endl<<endl;
    
    return 0;
}

/*
const char *str2="Md. Fazley Atif Maruf";

The warning you're seeing is because you're assigning a string literal to a non-const pointer, which is discouraged in C++. While it's technically valid in C, in C++, assigning a string literal directly to a non-const pointer is deprecated because modifying a string literal through such a pointer leads to undefined behavior.

To fix this warning, you should declare str2 as a pointer to a constant character (const char*) to indicate that the string literal it points to should not be modified:
*/

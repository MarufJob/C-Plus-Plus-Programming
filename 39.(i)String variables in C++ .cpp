//String in C++
#include<iostream>
using namespace std;

int main()
{
    //C Style string
    char str0[]="Md.Fazley Atif Maruf";
    char str1[]={'M','d','.','F','a','z','l','e','y',' ','A','t','i','f',' ','M','a','r','u','f','\0'};
    char str2[21]="Md.Fazley Atif Maruf";
    char str3[21]={'M','d','.','F','a','z','l','e','y',' ','A','t','i','f',' ','M','a','r','u','f','\0'};
    const char *str4="Md.Fazley Atif Maruf";

    cout<<"str0 = "<<str0<<endl;
    cout<<"str1 = "<<str1<<endl;
    cout<<"str2 = "<<str2<<endl;
    cout<<"str3 = "<<str3<<endl;
    cout<<"str4 = "<<str4<<endl<<endl<<endl;
    
    
    
    //C++ Style string
    string Str0 = ("Md.Fazley Atif Maruf");
    string Str1 = "Md.Fazley Atif Maruf";
    string Str2; Str2 = ("Md.Fazley Atif Maruf");
    
    
    cout<<"Str0 = "<<Str0<<endl;
    cout<<"Str1 = "<<Str1<<endl;
    cout<<"Str2 = "<<Str2<<endl<<endl<<endl;
    
    
    //std::string str(number,character);
    string STR0(15,'M');
    cout<<"STR0 = "<<STR0<<endl<<endl<<endl;
    
    
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "You entered: " << input << endl;
    
    return 0;
}

/*
Output: str0 = Md.Fazley Atif Maruf
        str1 = Md.Fazley Atif Maruf
        str2 = Md.Fazley Atif Maruf
        str3 = Md.Fazley Atif Maruf
        str4 = Md.Fazley Atif Maruf
        
        
        Str0 = Md.Fazley Atif Maruf
        Str1 = Md.Fazley Atif Maruf
        Str2 = Md.Fazley Atif Maruf
        
        
        STR0 = MMMMMMMMMMMMMMM
        
        
        Enter a string: Md.Fazley Atif Maruf
        You entered: Md.Fazley
*/


/*
const char *str2="Md. Fazley Atif Maruf";

The warning you're seeing is because you're assigning a string literal to a non-const pointer, which is discouraged in C++. While it's technically valid in C, in C++, assigning a string literal directly to a non-const pointer is deprecated because modifying a string literal through such a pointer leads to undefined behavior.

To fix this warning, you should declare str2 as a pointer to a constant character (const char*) to indicate that the string literal it points to should not be modified:
*/

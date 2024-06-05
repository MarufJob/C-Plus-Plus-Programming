#include <iostream>

using namespace std;

int main() {
  
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  
    for (int n : num_array) {
        cout << n << " ";
    }
  
    return 0;
}

/*
Output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
*/


/*

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int t,i,j,S_len;
    char str[25];
    string S;


    cout<<"Enter a string: ";
    cin.getline(str,25);
    // cin.get(S,10000);
    // cin.ignore();// Consume the newline character after inputting the string
    
    S_len = strlen(str);
    cout<<"String_len = "<<S_len<<endl;
    
    cout<<"For loop: ";
    //for(j=0 ; S[j]!='\0' ; j++)
    for(j=0 ; j<S_len ; j++)
    {
        cout<<str[j]<<" ";
    }
    cout<<endl;
    
    //for(auto c : str)  //auto c: The auto keyword tells the compiler to automatically deduce the type of c from the elements of str. If str is a std::string, c will be a type char.
    cout<<"Range loop in a array: ";
    for(char c : str)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    
    cout<<"Control range loop: ";
    j=0;
    for(char c : str)
    {
        j++;
        cout<<c<<" ";
        //cout<<S_len<<" = "<<j<<" = "<<c<<endl;
        if(c==str[S_len-1] && S_len==j)
        break;
    }
    cout<<endl;
    
    
    cout<<"Enter a string: ";
    getline(cin,S);

    //for(auto c : S)  //auto c: The auto keyword tells the compiler to automatically deduce the type of c from the elements of str. If str is a std::string, c will be of type char.
    cout<<"Range loop in a string: ";
    for(char c : S)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    
    cout<<"For loop in a string: ";
    for(j=0; S[j]!='\0'; j++)
    {
        cout<<S[j]<<" ";
    }
    return 0;
}

*/


/*

Enter a string: Md.Fazley Atif Maruf
String_len = 20
For loop: M d . F a z l e y   A t i f   M a r u f 
Range loop in a array: M d . F a z l e y   A t i f   M a r u f ...?
Control range loop: M d . F a z l e y   A t i f   M a r u f 
Enter a string: Md.Fazley Atif Maruf
Range loop in a string: M d . F a z l e y   A t i f   M a r u f 
For loop in a string: M d . F a z l e y   A t i f   M a r u f 

*/

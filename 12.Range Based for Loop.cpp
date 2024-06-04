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
    cout<<S_len<<endl;
    
    //for(j=0 ; S[j]!='\0' ; j++)
    for(j=0 ; j<S_len ; j++)
    {
        cout<<str[j]<<" ";
    }
    
    cout<<endl;
    
    //for(auto c : str)  //auto c: The auto keyword tells the compiler to automatically deduce the type of c from the elements of str. If str is a std::string, c will be a type char.
    for(char c : str)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    
    cout<<"Enter a string: ";
    getline(cin,S);

    //for(auto c : S)  //auto c: The auto keyword tells the compiler to automatically deduce the type of c from the elements of str. If str is a std::string, c will be of type char.
    for(char c : S)
    {
        cout<<c<<" ";
    }
    return 0;
}


/*
 Enter a string: Md. Fazley Atif Maruf
21
M d .   F a z l e y   A t i f   M a r u f 
M d .   F a z l e y   A t i f   M a r u f . . . 0
Enter a string: Md. Fazley Atif Maruf
M d .   F a z l e y   A t i f   M a r u f 
*/
*/

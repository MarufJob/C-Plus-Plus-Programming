#include<iostream>
using namespace std;

int main(){
    
    char var;
    
    cout <<"Take a character = ";
    cin >>var;
    
    if(var=='a'|| var=='e'||var=='i'||var=='o'||var=='u'||var=='A'||var=='E'||var=='I'||var=='O'||var=='U'){
        cout <<"Character is a Vowel"<<endl;
    }
    
    else{
        cout <<"Character is a Consonant"<<endl;
    }

    return 0;
}


/*
Input: Take a character = M
Output: Character is a Consonant

Input: Take a character = u
Output: Character is a Vowel
*/

/*
 // Convert the character to lowercase
    var = tolower(var);

    if (var == 'a' || var == 'e' || var == 'i' || var == 'o' || var == 'u') {
        cout << "Character is a Vowel" << endl;
    } else {
        cout << "Character is a Consonant" << endl;
    }

*/
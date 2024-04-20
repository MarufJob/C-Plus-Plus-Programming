#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cout << "How many input are you taking = ";
    cin >> t;
    cin.ignore(); // Consume the newline character after inputting the number of inputs

    for (int i = 0; i < t; i++) {
        char S[10000];
        
        cout << "Enter a string: ";
        cin.getline(S, 10000);

        char *word = strtok(S, ",!;?. ");
        int count = 0;
        
        while (word != NULL) {
            if (strlen(word) > 0) {
                count++;
            }
            word = strtok(NULL, ",!;?. ");
        }

        cout << "Count = " << count << endl;
    }

    return 0;
}


/*
How many input are you taking = 5
Input :Enter a string: Hurrah! was heard on all sides
Output:Count = 6
Input :Enter a string: Hello, I'm Brooker and you're watching TV
Output:Count = 7
Input :Enter a string: It is the winter of discontent
Output:Count = 6
Input :Enter a string: I broke my computer
Output:Count = 4
Input :Enter a string: His last play was a big hit
Output:Count = 7
*/
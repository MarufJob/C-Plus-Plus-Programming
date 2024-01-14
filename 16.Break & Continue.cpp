#include <iostream>

using namespace std;

int main() {

    cout << "break\n";
    for (int i = 1; i <= 5; i++) {
        // break condition     
        if (i == 3) {
            break;
        }
        
        cout << i << endl;
    }
    cout << "continue\n";
     for (int i = 1; i <= 5; i++) {
        // condition to continue
        if (i == 3) {
            continue;
        }
        
        cout << i << endl;
    }
    
    return 0;
}
/*
Output: break
        1
        2
        continue
        1
        2
        4
        5

*/
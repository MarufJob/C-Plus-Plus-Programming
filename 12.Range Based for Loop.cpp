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
// dataType arrayName[arraySize];
#include <iostream>
using namespace std;

int main() {
    //Answer: The number series 1, 2, 3, 4, . . . . , 98, 99. Therefore, 4950 
    int sum=0,sum1=4950;
    
    // declare and initialize and array
    int numbers[100];
    
    // using traditional for loop in insert array elements
    for (int i = 0; i < 100; ++i) {
        
        //cout << numbers[i] << "  ";
         if (i == 99) {
            continue;
        }
        numbers[i]=i;
        
        sum+=numbers[i];
      }
    
    cout << "A missing value 1-99 = " << sum1-sum;
    

    return 0;
}

/*
Output: A missing value 1-99 = 99
*/
#include <iostream>
using namespace std;
int main() {
    
    int i,j,n,length, arr[15]={1,5,7,9,11,13,15,17,19,21,23,15,27,29,31};
    
    length = sizeof(arr)/ sizeof(arr[0]);
    
    
    //for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    for(i=0 ; i<length-1 ; i++)
    {
        for(j=i+1 ; j<length ; j++){
            if(arr[i]==arr[j]){
            cout <<"Find the repeat element "<<arr[i]<<" number"<<endl;
            return 0;
            }
        }
        
    }
    cout <<"Not find the repeat element "<<arr[i]<<" number"<<endl;
    
    return 0;
}

/*
Output: Find the repeat element 15 number
*/

/*
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, arr[] = {1, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 15, 27, 29, 31};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Creating an unordered_set to store unique elements
    unordered_set<int> seen;

    for (int i = 0; i < length; i++) {
        // If the element is already in the set, it's a repeat
        if (seen.count(arr[i])) {
            cout << "Find the repeat element " << arr[i] << " number" << endl;
            return 0;
        }
        // Insert the element into the set
        seen.insert(arr[i]);
    }

    // No repeats found if the loop completes
    cout << "No repeat elements found in the array" << endl;

    return 0;
}


In this version, I used an unordered_set to keep track of elements seen so far. This allows for constant-time average complexity for the set operations, making the algorithm more efficient. Additionally, I modified the output message for clarity when no repeat elements are found.

***
Certainly! Let me explain what std::unordered_set is and how it works.

std::unordered_set is a container in C++ that stores unique elements in no particular order. It is part of the C++ Standard Template Library (STL). The key feature of std::unordered_set is that it provides constant time average complexity for insertion, deletion, and lookup operations.

Here's a brief overview of how it works:

Unordered Nature: The elements in an std::unordered_set are not stored in any specific order. Unlike std::set, which maintains a sorted order, std::unordered_set uses a hash table for efficient lookups.

Hashing: Each element in the set is hashed, and the hash value is used to determine the position of the element in the underlying array (hash table). This allows for fast insertion, deletion, and lookup operations.

Constant Time Average Complexity: On average, these operations have constant time complexity (O(1)). However, it's important to note that in the worst case, when there are hash collisions, the time complexity can be higher (O(n), where n is the number of elements in the set). Still, due to a good hash function and proper load factor management, collisions are usually minimized.
*/
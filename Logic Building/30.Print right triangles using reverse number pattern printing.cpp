#include <iostream>
using namespace std;

int main() {
    
    int i,j,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(i=1 ; i<=num ; i++){
        for(j=num ; j>num-i ; j--){
            cout <<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*
Input: Give number for pattern printing = 5
Output: 5 
        5 4 
        5 4 3 
        5 4 3 2 
        5 4 3 2 1 
*/


/*
for(i=1 ; i<=num ; i++){
        for(j=num ; j>=num-i+1 ; j--){
            cout <<j<<" ";
        }
        cout<<endl;
    }
*/

/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Give number for pattern printing = ";
    cin >> num;

    for (int i = 1; i <= num; i++, cout << endl)
        for (int j = num; j > num - i; j--)
            cout << j << " ";

    return 0;
}

In this version, the inner loop is integrated into the outer loop, and cout << endl is used to move to the next line after each iteration of the outer loop.
*/

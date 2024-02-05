#include <iostream>
using namespace std;

int main() {
    
    int row,col,k,num;
    
    cout <<"Give number for pattern printing = ";
    cin >> num;
    
    for(row=1 ; row<=num ; row++){
        
        // space print
        for(col=1 ; col<=num-row ; col++){
            cout <<"  ";
        }
        
        // // character print
        // for(col=1 ; col<=row ; col++){
        //     char var='A'+col-1;
        //     cout <<var<<" ";
        // }

        
        // Char print
        for(char name='A'; name <= 'A'+row-1;name=name+1)
        cout << name << " ";

        cout<<endl;
    }

    return 0;
}

/*
Input: Give number for pattern printing = 5
Output:         A
              A B
            A B C
          A B C D
        A B C D E

*/

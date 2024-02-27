#include <iostream>
using namespace std;

int main()
{
    for(int i=1000 ; i>=1 ; i--)
    {
        if(i%5==0 && i!=1000)
        cout<<endl;
        cout<<i<<"\t";
    }

    return 0;
}


/*
output : 1000   999    998    997    996
         995    994    993    992    991
         ...    ...    ...    ...    ...
         ...    ...    ...    ...    ...
         5      4      3      2      1
*/
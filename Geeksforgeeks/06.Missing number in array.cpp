//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        int arraySum,sum = n*(n+1)/2;
        
        for( int i=0 ; i<n-1 ; i++)
        {
            arraySum += array[i];
        }
        
        return sum-arraySum;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends


/*
Input:
N = 5
A[] = {1,2,3,5}
Output: 4

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
*/
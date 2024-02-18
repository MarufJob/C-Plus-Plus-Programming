//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int ans = INT_MIN;
	    //Largest element
	    for(int i=0; i<n;i++)
	    {
	        if(arr[i]>ans)
	        ans = arr[i];
	    }
	    
	    //Second largest
	    int second = INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]!=ans)
	        second = max(second,arr[i]);
	    }
	    
	    return second;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends

/*
Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.

Input: 
N = 3
Arr[] = {10, 5, 10}
Output: 5
Explanation: The largest element of 
the array is 10 and the second 
largest element is 5.
*/

/*
//*****Easy*****
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int ans = INT_MIN, lar= INT_MIN;
	    //Largest element
	    for(int i=0; i<n ; i++){
	        
	        if(arr[i]>lar){
	            ans=lar;
	            lar=arr[i];
	        }
	        
	        if(ans < arr[i] && arr[i] < lar)
	        ans = arr[i];
	        
	    }
	    if (ans==INT_MIN)
	    return -1;
	    
	    return ans;
	}
};
*/

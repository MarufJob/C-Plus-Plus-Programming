/{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    //int temp = arr[n-1];
    int temp = arr[n-1];
    
    
    for(int i = n-1; i>=1 ; i--){
        arr[i]=arr[i-1];
    }
    
    arr[0]=temp;
    
    
}

/*
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4

Input:
N = 8
A[] = {9, 8, 7, 6, 4, 2, 1, 3}
Output:
3 9 8 7 6 4 2 1

Constraints:
1<=N<=105
0<=a[i]<=105
*/
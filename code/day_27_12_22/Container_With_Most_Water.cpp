
//https://practice.geeksforgeeks.org/problems/container-with-most-water0535/1
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    long long res = 0, id;
    int s = 0, e = len - 1;
    while ( s <= e){
        id = (e - s)*min(A[s], A[e]);
        res = max(res, id);
        if (A[s] > A[e]) e--;
        else s++;
    }
    return res;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends
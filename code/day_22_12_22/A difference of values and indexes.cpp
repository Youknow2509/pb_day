// https://practice.geeksforgeeks.org/problems/a-difference-of-values-and-indexes0302/1
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int ans = INT_MIN;
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<n;i++) {
            mx = max(mx,arr[i]-i);
            mn = min(mn,arr[i]+i);
            int v1 = (arr[i]+i)-mn;
            int v2 = mx-(arr[i]-i);
            ans = max(ans,max(v1,v2));
        }
        return ans;
    
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T, case_n = 1;
    cout << "Test case: ";
	cin>>T;
    cout << endl;
	while(T--){
        cout << "# Case " << case_n << endl; case_n++;
	    int n;
        cout << " n = ";
	    cin>>n;
        cout << endl;
	    int arr[n];
        cout << "arr[ ]: ";
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
        cout << endl;
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends
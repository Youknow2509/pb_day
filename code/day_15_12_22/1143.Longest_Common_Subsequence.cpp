//https://leetcode.com/problems/longest-common-subsequence/

#include <bits/stdc++.h>

using namespace std;
// text1 = "abcde", text2 = "ace" 
// output: 3    

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[text1.size()+1][text2.size()+1];
        for(int i=0;i<=text1.size();i++)
        {
            for(int j=0;j<=text2.size();j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else
                {
                    if(text1[i-1]==text2[j-1])
                        dp[i][j]=1+dp[i-1][j-1];
                    else
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[text1.size()][text2.size()];
    }
};
int main()
{

    int n, i = 1, size_nums, x;
    Solution st;

    cout << "Tese cace: ";
    cin >> n;
    cout << endl;

    while (n--)
    {
        string text1, text2;
        cout << endl;
        cout << "#####" << endl;
        cout << "# Case " << i << endl; i++;
        cout << "#####" << endl << endl;
        cout << "Input text 1: "; cin >> text1;
        cout << endl;
        cout << "Input text 2: "; cin >> text2;
        cout << endl;
        
        cout << "Output: " << st.longestCommonSubsequence(text1, text2);
        cout << endl;
    }

    return 0;
}




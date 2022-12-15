//https://leetcode.com/problems/longest-common-subsequence/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        // ...
        // ...
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
        cout << "# Case " << i << endl; i++;
        cout << "Input text 1: "; cin >> text1;
        cout << endl;
        cout << "Input text 2: "; cin >> text2;
        cout << endl;
        
        cout << "Output: " << st.longestCommonSubsequence(text1, text2);
        cout << endl;
    }

    return 0;
}




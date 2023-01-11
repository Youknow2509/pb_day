
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    long long minIncrements(vector<int> vt, int n){
        long long res = 0;
        sort(vt.begin(), vt.end());
        for (int i = 1; i < n; i++){
            if (vt[i - 1] >= vt[i]){
                res += vt[i-1] - vt[i] + 1;
                vt[i] = vt[i-1] + 1;
            }
        }
        return res;
    }
};
// 4 5 4 1 3 7 6 3 3
// sort 1 3 3 3 4 4 5 6 7
// =>   1 3 4 5 6 7 8 9 10
// =>       1 2 2 3 3 3 3  => 1 + 2 + 2 + 3 + 3 + 3 + 3 = 17.
int main(){
    int test_case, i = 1;
    cout << "Test case: ";
    cin >> test_case;
    cout << endl;
    while(test_case--){
        int n;
        vector<int> vt;
        Solution st;
        cout << "   #Case " << i << ": " << endl;
        cout << "   Input size vector: ";
        cin >> n;
        cout << endl;
        cout << "   Input elements vector: ";
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            vt.push_back(x);
        }
        cout << endl;
        cout << "   Output: " << st.minIncrements(vt, n) << endl;
    }
    return 0;
}
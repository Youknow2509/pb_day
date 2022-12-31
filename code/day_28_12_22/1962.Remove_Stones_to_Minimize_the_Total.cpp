// https://leetcode.com/problems/remove-stones-to-minimize-the-total/

#include <bits/stdc++.h>

using namespace std;
/* Input: piles = [5,4,9], k = 2
Output: 12
Explanation: Steps of a possible scenario are:
- Apply the operation on pile 2. The resulting piles are [5,4,5].
- Apply the operation on pile 0. The resulting piles are [3,4,5].
The total number of stones in [3,4,5] is 12. 

Input: piles = [4,3,6,7], k = 3
Output: 12
Explanation: Steps of a possible scenario are:
- Apply the operation on pile 2. The resulting piles are [4,3,3,7].
- Apply the operation on pile 3. The resulting piles are [4,3,3,4].
- Apply the operation on pile 0. The resulting piles are [2,3,3,4].
The total number of stones in [2,3,3,4] is 12.*/
class Solution {

public:
    
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(), piles.end());
        int res = accumulate(piles.begin(), piles.end(), 0);
        while (k--) {
            int a = pq.top();
            pq.pop();
            pq.push(a - a / 2);
            res -= a / 2;
        }
        return res;
        

    }
    
};

int main(){
    int n, i = 1;
    cout << "Test case: ";
    cin >> n;
    cout << endl;
    while(n--){
        int size_arr, k;
        Solution st;
        vector <int> vt;
        cout << "# Case " << i << endl; i++;
        cout << "   Input size arr: ";
        cin >> size_arr;
        cout << endl;
        cout << "   Input arr: ";
        for (int i = 0; i < size_arr; i++){
            int x;
            cin >> x;
            vt.push_back(x);
        }
        cout << endl << "   Input k: "; cin >> k;
        cout << endl;
        cout << "   Output: " << st.minStoneSum(vt, k) << endl;
    }
    return 0;
}
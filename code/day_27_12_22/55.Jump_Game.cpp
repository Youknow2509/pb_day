// https://leetcode.com/problems/jump-game/

#include <bits/stdc++.h>

using namespace std;
// nums = [2,3,1,1,4]
//         0 1 2 3 4
// true
// nums = [3,2,1,0,4]
//         0 1 2 3 4
// flase
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=0; 
        for( int i = 0; i <= mx && i < nums.size (); i++){
            mx = max( mx, i + nums[i]); 
            if(mx >= nums.size() - 1) return true; 
        }
        return false; 
    }
};


int main(){

    int number_test_case, i = 0;
    cout << "Test case: ";
    cin >> number_test_case ;
    cout << endl;
    while(number_test_case--){
        cout << "# Case " << i << endl; i++;
        Solution st;
        int size_nums;
        vector<int> nums;
        cout << "    Input size nums: ";
        cin >> size_nums;
        cout << endl;
        cout << "   Input nums: ";
        for (int j = 0; j < size_nums; j++){
            int x;
            cin >> x;
            nums.push_back(x);
        }
        if ( st.canJump(nums) ) cout << "  true" << endl;
        else cout << "  flase" << endl;
    }

    return 0;
}
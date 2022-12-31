// Ex: 
//  Input: aaabbaaac
//  Output: a3b2a3c1
#include <bits/stdc++.h>

using namespace std;

int main(){

    string str, res = "";
    stack<char> st;

    getline(cin, str);

    int n = str.length(), count = 0;
    for ( int i = 0; i <= n; i++){
        if (st.empty() || st.top() == str[i]){
            st.push(str[i]);
        }
        else{
            int count = 0;
            res += st.top();
            while(!st.empty()){
                count++;
                st.pop();
            }
            st.push(str[i]);
            res += to_string(count);
        }
    }
    cout << res;

    return 0;
}

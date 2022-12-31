
#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin >> str;
    int n = str.length(), mx = 0;
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j >=0; j--){
            if (str[i] == str[j]) mx = max(mx, j - i + 1);
        }
    }
    cout << mx;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    int S, n, T, tong = 0, tich = 0;
    cin >> S >> n >> T;
    tong = T/n - n;
    for ( int i = 1; i < tong ; i++){
        int j = tong - i;
        if ( i*j == S){
            cout << j << " " << i;
            return 0;
        }
    }
    return 0;
}
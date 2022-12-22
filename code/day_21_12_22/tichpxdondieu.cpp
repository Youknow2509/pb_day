

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    int a[n];
    for ( int i = 1; i <= n ; i ++) cin >> a[i];
    for ( int i = 1; i < n; i++){
        if ( a[i+1] == a[i]){
            x++;
        }
        else {
            if ( a[i+1] > a[i]) {
                y++;
            }
            else {
                z++;
            }
        }
    }
    if ( x == n - 1) cout << "Day bang nhau";
    else if ( y == n - 1 ) cout << "Day don dieu tang ngat";
    else if ( z == n - 1) cout << "Day don dieu giam ngat";
    else if ( x + y == n - 1) cout << "Day don dieu tang";
    else if ( x + z == n - 1) cout << "Day don dieu giam";
    else cout << "Day khong don dieu";
    return 0;
}
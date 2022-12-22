

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
    cin >> n;
    int a[n];
    for ( int i = 1; i <= n ; i ++) cin >> a[i];
    for ( int i = 1; i < n; i++){
        if ( a[i+1] == a[i]){
            d2++; d3++; d5++;d1++;d4++;
        }
        else {
            if ( a[i+1] > a[i]) {
                d1++;
            }
            else {
                d4++;
            }
        }
    }
    if (d5 == n - 1){
        cout << "Day bang nhau";
        return 0;
    }
    if (d1 == n - 1){
        cout << "Day don dieu tang ngat";
        return 0;
    }
    if (d2 == n - 1){
        cout << "Day don dieu tang";
        return 0;
    }
    if (d3 == n - 1){
        cout << "Day don dieu giam";
        return 0;
    }
    if (d4 == n - 1){
        cout << "Day don dieu giam ngat";
        return 0;
    }
    cout << "Day khong don dieu";
    return 0;
}
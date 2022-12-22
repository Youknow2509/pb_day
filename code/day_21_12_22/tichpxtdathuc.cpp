
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m, k, mx = 0;
    double a[100], b[100],c[100];
    vector<double> sum;
    cin >> n;
    for ( int i = 0; i < n; i ++){
        cin >> a[i];
        sum[i] += a[i];
    }
    cin >> m;
    for ( int i = 0; i < m; i ++){
        cin >> b[i];
        sum[i] += b[i];
    }
    cin >> k;
    for ( int i = 0; i < k; i ++){
        cin >> c[i];
        sum[i] += c[i];
    }
    n = __gcd(1,2);
    return 0;
}
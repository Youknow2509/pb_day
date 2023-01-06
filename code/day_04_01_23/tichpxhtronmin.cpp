
#include <bits/stdc++.h>

using namespace std;

int main(){
    int x[1001], y[1001], n, res = INT_MAX;
    cin >> n;
    for (int i  = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++){
        int r_bp = -1, temp = -1;
        for (int j = 0; j < n;j++){
            temp = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
            r_bp = temp >= r_bp ? temp : r_bp;
        }
        res = res >= r_bp ? r_bp : res;
    }
    
    cout << setprecision(3) << fixed << res*M_PI;
    return 0;
}
/* 6
0 0
5 0
5 4
9 8
9 -2 
13 -2 */


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d1 = 0, d2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if ( a[i] % 2 != 0) {
            cout << a[i] << " ";
            d1++;
        }
    }
    if (!d1) cout << "Day khong co so le" << endl;else cout << endl;
    for (int i = 0; i < n; i++){
        if ( a[i] % 5 == 2 || a[i] % 7 == 3 || -a[i] % 5 == 2 || -a[i] % 7 == 3){
            cout << a[i] << " ";
            d2 ++;
        }
    }
    if (!d2) cout << "Day khong co so chia nam du hai hoac chia bay du ba" << endl;else cout << endl;
    for (int i = 1 ; i < n -1; i++){
        if (a[i+1] - a[i] == a[i] - a[i-1]) cout << a[i-1] << " " << a[i] << " " << a[i+1] << endl;
    }
    return 0;
}
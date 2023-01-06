
#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int n, a[1001], d1 = 0 , temp1 = 0, d2 = 0, temp2 = 0, res1[1001], res2[1001];
    vector<int> vt1, vt2;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    d1 = a[1] - a[0];
    res1[0] = a[0];
    for (int i = 1; i < n; i++){
        res1[i] = res1[i-1] + d1;
    }
    d2 = a[n-1] - a[n-2];
    res2[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--){
        res2[i] = res2[i+1] - d2;
    }
    for (int i = 0; i < n; i++){
        
        if (a[i] != res1[i]){
            temp1 ++;
            vt1.push_back(i+1);
        }
        if (a[i] != res2[i]){
            temp2 ++;
            vt2.push_back(i+1);
        }
    }
    if (temp1 == 0 && temp2 == 0) cout <<"Day la day cap so cong";
    else if (temp1 == 1) cout << "Day la gan cap so cong tai vi tri " << vt1[0];
    else if (temp2 == 1) cout << "Day la gan cap so cong tai vi tri " << vt2[0];
    else cout << "Day khong la day gan cap so cong";
    return 0;
}

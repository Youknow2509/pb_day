
#include <bits/stdc++.h>

using namespace std;

void nhap_ma_tran(int a[100][100], int &m, int &n){
    cin >> m >> n;
    for ( int i = 0; i < m; i++){
        for ( int j = 0;  j < n; j++){
            cin >> a[i][j];
        }
    }
}
void xuat_ma_tran(int a[100][100], int &m, int &n){
    for ( int i = 0; i < m; i++){
        for ( int j = 0;  j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void cau_1(int a[100][100], int &m, int &n){
    long long s = 1;
    for (int i = 2; i < m; i = i + 2){
        for (int  j = 1; j < n; j = j + 2){
            s *= a[i][j];
        }
    }
    cout << s << endl;
}
void cau_2(int a[100][100], int &m, int &n){
    int c = 0, mx_am = 0;
    vector<int> x, y;
    double s = 1;
    for (int i = 2; i < m; i = i + 2){
        for (int  j = 1; j < n; j = j + 2){
            if (a[i][j] >= 3 && a[i][j] <= 7) {
                c++;
                s *= a[i][j];
            }
            if (a[i][j] >= mx_am && a[i][j] < 0){
                mx_am = a[i][j];
            }
        }
    }
    // gia tri trung binh nhan
    cout << pow(s, 1.0/c) << endl;
    // hien thi vi tri gia tri am_lo
    for (int i = 2; i < m; i = i + 2){
        for (int  j = 1; j < n; j = j + 2){
            if (a[i][j] == mx_am){
                cout << "a[" << i << "][" << j << "] = max_am " << endl;
            }
        }
    }
    // max theo hang, min theo cot
    double max_hang = -DBL_MAX;
    int x_x = -1, y_y = -1;
    for (int i = 0; i < m; i ++){
        for (int  j = 0; j < n; j ++){
            if ( max_hang < a[i][j]){
                max_hang = a[i][j];
                x_x = i;
                y_y = j;
            }
        }
        // check xem co min cot ko
        for (int k = 0; i < m; i++){
            if ( max_hang > a[i][y_y] ) {
                max_hang = -INT_MAX;
                x_x = 101;
                continue;
            }
        }
    }
    if (x_x != 101) cout << "diem yen ngua la" << max_hang << endl;
    else cout << "khong co diem thoa man"<< endl;

}
int main(){
    
    int a[100][100], m, n;
    
    nhap_ma_tran(a, m, n);
    xuat_ma_tran(a, m, n);
    cau_1(a, m, n);
    cau_2(a, m, n);
    return 0;
}
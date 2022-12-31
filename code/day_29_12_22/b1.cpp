
#include <bits/stdc++.h>

using namespace std;

struct diem
{
    double x, y;
};


int main(){

    int so_diem;
    cout << "Nhap so diem: ";
    cin >> so_diem;
    cout << endl;
    diem A[so_diem];
    cout << "Nhap so du lieu cac diem: " << endl;
    for (int i = 0; i < so_diem; i++){
        cin >> A[i].x >> A[i].y;
        cout << "A[i]: x = " << A[i].x << " " << "y = " << A[i].y << endl;
    }
    // dem so diem thuoc duong tron tam O ban kinh 10.
    int dem1 = 0;
    for (int i = 0; i < so_diem; i++){
        if ( A[i].y > 0 && (A[i].x)*(A[i].x) + (A[i].y)*(A[i].y) >= 100) dem1 ++;
    }
    cout << "So phan tu thoa man la: " << dem1 << endl;
    // duong tron tam cac diem
    double  r_mn = 0;
    for (int i = 0; i < so_diem; i++){
        for (int j = i + 1; i < so_diem; j++){
            r_mn = max(r_mn, sqrt((A[i].x-A[j].x)*(A[i].x-A[j].x) + (A[i].y-A[j].y)*(A[i].y-A[j].y)));
        }
    }
    cout << "Ban kinh nho nhat la: " << r_mn*r_mn*3.14 << endl;
    //dem so doan trong goc phan tu thu 3
    int dem2 = 0;
    for (int i = 0; i < so_diem; i++){
        if (A[i].x < 0 && A[i].y < 0) dem2++;

    }
    cout << "So doan thuoc goc phan tu thu 3: " << dem2*(dem2-1)/2 << endl;


    return 0;
}
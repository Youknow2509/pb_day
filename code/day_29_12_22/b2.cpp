
#include <bits/stdc++.h>

using namespace std;

struct SV
{
    string ten;
    int tuoi;
    double diem;
};


int main(){

    int so_sv;
    cout << "Nhap so sinh vien trong danh sach: "; cin >> so_sv;
    SV a[so_sv];
    cout << endl << "Nhap du lieu danh sach sinh vien: ";
    for (int i = 0; i < so_sv; i++){
        cout << "Sv A[" << i << "] co ten:";        getline(cin, a[i].ten);
        cout << ", tuoi: ";     cin >> a[i].tuoi;
        cout << ", diem: ";     cin >>  a[i].diem;
        cout << endl;
    }
    cout <<endl;
    // nhap xuat
    double tong_diem = 0;
    for (int i = 0; i < so_sv; i++){
        tong_diem += a[i].diem;
    }
    cout << "Diem chuan trung binh dssv" << tong_diem/so_sv << endl;
    // diem chuan dssv
    int sv_diem_duoi_4 = 0;
    for (int i = 0; i < so_sv; i++){
        if (a[i].diem < 4) sv_diem_duoi_4 ++;
    }
    cout << "So sv diem duoi 4: " << sv_diem_duoi_4 << endl;
    // dem so danh sach sv diem < 4
    SV b[100];
    double diem_lon_nhat = -1, tuoi_lon_nhat = -1;
    string ten = "";
    for (int i = 0; i < so_sv; i++){
        diem_lon_nhat = max(diem_lon_nhat, a[i].diem);
    }
    for (int i = 0; i < so_sv; i++){
        if (a[i].diem == diem_lon_nhat){
            if (a[i].tuoi > tuoi_lon_nhat){
                ten = a[i].ten;
            }
        }
    }
    cout << "Sv thoa man la : " << ten << endl;
    // tim 1 (sinh vien diem lon nhat && tuoi lai lon nhat)
    int j = 0;
    bool sv_can_tim = false;
    string ten_sv_can_tim ="";
    cout << "Nhap ten sv can tim: ";
    getline(cin, ten_sv_can_tim);
    for (int i = 0; i < so_sv; i++){
        if (ten_sv_can_tim == a[i].ten) {
            sv_can_tim = true;
            j = i;
        }
    }
    if (sv_can_tim){
        cout << "Ho va ten: " << a[j].ten << endl;
        cout << "So tuoi: " << a[j].tuoi << endl;
        cout << "So diem: " << a[j].diem << endl;
    }
    else cout << "Khong co sv trong ds";
    //  nhap ho ten sv -> tim

    int dem_sv_diem_lon_hon_tb = 0;
    for (int i = 0; i < so_sv; i++){
        if (a[i].diem > tong_diem/so_sv) dem_sv_diem_lon_hon_tb ++;
    }
    cout << "So sv co diem lon hon trung binh la: " << dem_sv_diem_lon_hon_tb << endl;
    // dem so sv co diem cao hon diem tb lop

    for (int i = 0; i < so_sv - 1; i++){
        for (int j = i + 1; j < so_sv; j++){
            if (a[j].diem > a[i].diem){
                swap(a[j].diem, a[i].diem);
            }
        }
    }
    for (int i = 0; i < so_sv - 1; i++){
        cout << "Ho va ten: " << a[i].ten << ", so tuoi: " << a[i].tuoi << ", so diem: " << a[i].diem << endl;
    }

    // sx ds theo diem giam dan

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

double mu(double x, int n){
    double s = 1;
    while(n--){
        s *= x;
    }
    return s;
}

int main(){
    int n;
    double x, y, S = 0;
    printf("Nhap lan luot gia tri cua n, x, y: ");
    scanf("%d %lf %lf", &n, &x, &y);
    for(int i = 1; i <= n; i++){
        S += 1 + i*mu(x,i)+i*mu(y,i);
    }
    printf("\nGia tri tong la: %lf", S);
    return 0;
}
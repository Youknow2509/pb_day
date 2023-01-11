
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    
    printf("Nhap so phan tu cua day: ");

    scanf("%d", &n);

    int a[n], am = 0, k, s = 1;

    printf("\nNhap cac phan tu cua day: ");
    
    for (int i = 1; i <= n; i++){
        printf("\na[%d]: ", i);
        scanf("%d",&a[i]);
    }

    printf("\nIn day duong: ");
    
    for (int i = 1; i <= n; i = i + 2){
        printf("%d ", a[i]);
    }

    printf("\nIn day am: ");
    
    for (int i = 2; i <= n; i = i + 2){
        printf("%d ", a[i]);
    }

    for (int i = 2; i <= n; i = i + 2){
        if(a[i] <= am)
        {
            am = a[i];
        }
    }

    printf("\nGia tri am nho nhat la: %d", am);
    printf("\nNhap k:");
    scanf("%d", &k);
    for (int i = 1; i <= n; i++){
        if (i % k == 0) {
            s *= a[i];
        }
    }

    printf("\nTich co gia tri la: %d", s);

    return 0;
}
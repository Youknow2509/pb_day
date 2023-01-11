
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    printf("Nhap so so tu cua day: ");
    scanf("%d",&n);
    double mx = -DBL_MAX;
    double a[n];
    long long int s = 0;
    printf("\n");
    printf("Nhap gia tri cac phan tu cua day: ");

    for (int i = 1; i <= n; i++)
    {
        scanf("%lf", &a[i]);
    }

    for (int i = 1; i <= n; i++){
        if (mx <= a[i]/(n-i+1))
        {
            mx = a[i]/(n-i+1);
        }
    }

    for(int i = 1; i <n ; i++)
    {
        s += a[i] + a[i + 1];
    }
    printf("\n");

    printf("Gia tri lon nhat can tim la: %lf", mx);
    printf("\n");

    printf("Tong la: %lli", s);

    return 0;
}
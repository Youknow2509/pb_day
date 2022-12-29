
    #include <bits/stdc++.h>

    using namespace std;

    int main(){

        double a[100];
        for (int i = 0; i < 100; i++) {
            cin >> a[i];
            if ( a[i] <= 10)
                cout << "A[" << i << "] = " << a[i] << endl;
        }
        return 0;
    }

    #include <bits/stdc++.h>

    using namespace std;

    int main(){

        int x, y, z;
        cin >> x >> y;
        z = x > y ? x  : y;
        x = x + y - z;
        for (int i = x; i <z; i++){
            if (i % 5 == 2 || i % 5 == 3) cout << i << endl;
        }
        return 0;
    }
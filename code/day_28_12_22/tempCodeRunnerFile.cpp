
    #include <bits/stdc++.h>

    using namespace std;

    int main(){

        int M[12][12], c;
        char ch;
        double s = 0;
        cin >> c >> ch;

        for (int i = 0; i < 12; i++){
            for (int j = 0; j < 12; j++){
                cin >> M[i][j];
                if (i == 5){
                        s += M[i][j];
                }
            }
        }
        if (ch == 'S') cout << setprecision(1) << fixed << s;
        else cout << setprecision(1) << fixed << s/12;

        return 0;
    }
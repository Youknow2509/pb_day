
#include <bits/stdc++.h>

using namespace std;

int main(){

    int m[12][12];
    double a = 0, b = 1;
    char input;
    cin >> input;
    for (int i = 0; i < 12; i++){
        for ( int j = 0; j < 12; j++){
            cin >> m[i][j];
            if ((i == 1 && j == 11) || (i == 2 && j == 10) || (i == 2 && j == 11) || (i == 3 && j == 11) || (i == 3 && j == 10) || (i == 3 && j == 9) || (i == 4 && j == 11)||(i == 4 && j == 10)||(i == 4 && j == 9)||(i == 4 && j == 8)||(i == 5 && j == 7)||(i == 5 && j == 8)||(i == 5 && j == 9)||(i == 5 && j == 10)||(i == 5 && j == 11)||(i == 10 && j == 11) || (i == 9 && j == 10) || (i == 9 && j == 11) || (i == 8 && j == 11) || (i == 8 && j == 10) || (i == 8 && j == 9) || (i == 7 && j == 11)||(i == 7 && j == 10)||(i == 7 && j == 9)||(i == 7 && j == 8)||(i == 6 && j == 7)||(i == 6 && j == 8)||(i == 6 && j == 9)||(i == 6 && j == 10)||(i == 6 && j == 11)){
                a += m[i][j];
            }
        }
    }
    if (input == 'S') cout << setprecision(1) <<fixed << a;
    else cout << setprecision(1) << fixed << a/30.0;

    return 0;
}

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
                if (j == c){
                        s += M[i][j];
                }
            }
        }
        if (ch == 'S') cout << round(s*10)/10;
        else cout << round(s*10/12)/10;

        return 0;
    }
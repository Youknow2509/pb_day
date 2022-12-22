
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 1, s, c = 0;
    s = n;
    for (int i = 1; i <= 11 ; i++){
        int j = 0;
        while (s--){
            //cout << " (i == " << i << "&&" << "j == " << j << ")"<< "||";
            j++;
            c++;
        }
        n++;
        s = n;
    }
    cout << c;
    return 0;
}
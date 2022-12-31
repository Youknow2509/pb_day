
    #include <bits/stdc++.h>

    using namespace std;

    int main(){

        int N[20], index, s = 0, e = 19;
        for (int i = 0; i < 20; i++){
            cin >> N[i];
        }
        while(s <= e){
            swap(N[s], N[e]);
            s++; e--;
        }
        for (int i = 0; i < 20; i++){
            cout << "N[" << i << "] = " << N[i] << endl;  
        }
        return 0;
    }
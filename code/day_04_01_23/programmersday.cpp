
#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int n;
    cin >> n;
    if (n < 2009) cout << "-1";
    else{
        if (n % 4 == 0) cout << "12.09." << n << " - Happy Programmer's Day!";
        else cout << "13.09." << n <<  " - Happy Programmer's Day!";
    }
    
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

struct toado
{
    int x, y;
};


int main(){
    map<pair<int, int>, int> mp;
    pair<int, int> p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> p.first >> p.second;
        mp[p]++;
        if (mp[p] != 1) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
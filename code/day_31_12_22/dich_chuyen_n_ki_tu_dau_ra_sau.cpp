
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, temp;
    queue<int> qu;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        qu.push(temp);
    }
    cin >> k;
    while (k--)
    {
        qu.push(qu.front());
        qu.pop();
    }
    while ( !qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
    

    return 0;
}

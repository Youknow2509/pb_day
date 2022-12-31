
#include <bits/stdc++.h>

using namespace std;

bool isPrime (int n){
    if ( n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){

    int n;
    queue<int> q;
    cin >> n;
    for (int i = 2; i <= n && i < 10; i++){
        if (isPrime(i)){
            q.push(i);
        }
    }
    while (!q.empty()){
        for (int i = 1; i <= 9; i++){
            if (isPrime(q.front()*10 + i) && q.front()*10 + i <= n){
                q.push(q.front()*10 + i);
            }
        }
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

long long mod(long long a,long long b){
    for (long long i = 0; i < b; i++){
        if ((a-i)%b==0)return i;
    }
    return 0;
}

int main(){
    long long a, array[1001]; 
    vector<long long> d1, d2, d3;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> array[i];
        if (array[i] % 2 != 0) d1.push_back(array[i]);
        if (mod(array[i],5) == 2 || mod(array[i],7) == 3) d2.push_back(array[i]);
    }
    if (!d1.size()) cout << "Day khong co so le" << endl;
    else {
        for (int i = 0; i < d1.size(); i++) cout << d1[i] << " ";
        cout << endl;
    }
    if (!d2.size()) cout << "Day khong co so chia nam du hai hoac chia bay du ba" << endl;
    else{
        for (int i = 0; i < d2.size(); i++) cout << d2[i] << " ";
        cout << endl;
    }
    for (int i = 1; i < a - 1; i++){
        if (array[i+1] - array[i] == array[i] - array[i-1]) d3.push_back(i);
    }
    if (!d3.size()) cout << "Day khong co bo ba lien tiep cap so cong";
    else{
        for (int i = 0; i < d3.size(); i++) cout << array[d3[i]-1] << " " << array[d3[i]] << " " << array[d3[i]+1] << endl;
        
    }


    return 0;
}


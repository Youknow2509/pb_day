
#include <bits/stdc++.h>

using namespace std;
//           
// Input:  
/* 4         13
0123456789           sz:19  19 - 13 
Ha Noi 3 - 0 Ha Nam
Thua Thien - Hue 2 - 2 Tp Ho Chi Minh
Ha Nam 4 - 1 Thua Thien - Hue
Tp Ho Chi Minh 0 - 0 Ha Noi
Ha Noi 1 - 2 Thua Thien - Hue
Ha Nam 2 - 3 Tp Ho Chi Minh */

int main(){
    
    int n;
    map<string, int> mp;
    map<string, int> :: iterator it;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n*(n-1)/2; i++){
        string str;
        //cin.clear();
        
        getline(cin, str); 
        int size_str = str.length();
        for (int j = 0; j < size_str; j++){
            if(isdigit(str[j])){
                if (str[j] > str[j + 4]){
                    mp[str.substr(0, j - 1)] += 3;
                }
                else if (str[j] == str[j + 4]){
                    mp[str.substr(0, j - 1)] ++;
                    mp[str.substr(j + 6, size_str - j - 6)] ++;
                }
                else mp[str.substr(j + 6, size_str - j - 6)] += 3; 
                /* cout << str.substr(0, j - 1) << "-> ";
                cout << str[j] << endl;
                cout << str.substr(j + 6, size_str - j - 6) << "-> ";
                cout << str[j+4] << endl; */
                break;
            }
        } 
    }
    cout << "Point: " << endl;
    for(it = mp.begin();it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    } 
    
    return 0;
} 
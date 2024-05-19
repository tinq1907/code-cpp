#include<bits/stdc++.h> 
using namespace std; 
bool ok (string a , string b){
    string s1 = a + b; 
    string s2 = b + a; 
    return s1 < s2; 
} 
int main(){ 
    int t; 
    cin >> t; 
    while(t--){ 
        int n; cin >> n; 
        int a[n] ; 
        vector<string> mp; 
        for(int i = 0 ; i < n ; i++){ 
            cin >> a[i]; 
            string ok = to_string(a[i]); 
            mp.push_back(ok); 
        } 
        sort(mp.begin() , mp.end() , ok); 
        for(auto it = mp.rbegin() ; it != mp.rend() ; it++){ 
            cout << *it; 
        } 
        cout << endl;
    } 
}
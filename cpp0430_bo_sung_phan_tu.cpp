#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >>t; 
    while(t--){ 
        int n; cin >> n;
        int a[n];
        map<int, bool> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]] = true;
        }
        int max = *max_element(a, a + n), min = *min_element(a, a + n);
        int cnt = 0;
        for(int i = min; i <= max; i++){
            if(mp[i] == false) cnt++;
        }
        cout << cnt << endl;
    } 
    return 0; 
}
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int cnt[30] = {};
        int max = 0;
        string s; cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++){
            cnt[s[i] - 'a']++; 
        }
        for (int i = 0; i < 30; i++){
            if (cnt[i] > max) max = cnt[i];
        }
        if (n % 2 == 0){
            if (max > n / 2) cout << 0 << endl;
            else cout << 1 << endl;
        }
        else{
            if (max > n / 2 + 1) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}
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
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        int n = s.size();
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            for (int j = i; j < n; ++j){
                if (s[i] == s[j]) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
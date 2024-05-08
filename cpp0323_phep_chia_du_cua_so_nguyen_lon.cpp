#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

ll solve(string n, ll m){
    ll res = 0;
    for (int i = 0; i < n.size(); i++){
        res = (res * 10 + (n[i] - '0')) % m;
    }
    return res;
}

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
        string n;
        ll m;
        cin >> n >> m;
        cout << solve(n, m) << endl;
    }
    return 0;
}
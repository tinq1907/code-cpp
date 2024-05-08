#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

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
        ll res = 1;
        ll x, y, p; cin >> x >> y >> p;
        for (ll i = y; i > 0; i--){
            res = (res * x) % p;
        }
        cout << res << endl;
    }
    return 0;
}
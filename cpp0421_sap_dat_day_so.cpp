#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define f(i,a,b) for(int i = a; i < n; ++i)
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
        map<ll, bool> mp;
        ll n; cin >> n;
        for (ll i = 0; i < n; i++){
            ll x; cin >> x;
            mp[x] = true;
        }
        for (ll i = 0; i < n; i++){
            if (mp[i] == true) cout << i << " ";
            else cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}
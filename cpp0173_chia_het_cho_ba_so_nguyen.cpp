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
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll a = pow(10, n - 1);
        ll b = pow(10, n);
        ll g = (x * y) / (__gcd(x, y));
        g = (g * z) / (__gcd(g, z));
        if (g >= a && g < b) cout << g << endl;
        else{
            ll res = (ll)(a + g - 1) / g * g;
            if (res > b) cout << "-1" << endl;
            else cout << res << endl; 
        }
    }
    return 0;
}
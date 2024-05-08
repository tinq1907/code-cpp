#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

ll remain(string n, ll m){
    ll res = 0;
    for (int i = 0; i < n.size(); i++){
        res = (res * 10 + (n[i] - '0')) % m;
    }
    return res;
}

ll power(ll x, ll y, ll m){
    ll res = 1;
    x = x % m;
    while (y > 0){
        if (y % 2 == 1){
            res = (res * x) % m;
        }
        y /= 2;
        x = (x * x) % m;
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
        string a;
        ll b, m;
        cin >> a >> b >> m;
        ll res = remain(a, m);
        ll fres = power(res, b, m);
        cout << fres << endl;
    }
    return 0;
}
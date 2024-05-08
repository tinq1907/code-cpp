#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

ll modcal(ll a, ll b, ll c){
    ll res = 0;
    a = a % c;
    while (b){
        if(b % 2 == 1){
            res = (res + a) % c;
        }
        a = (a * 2) % c;
        b /= 2;
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
        ll a, b, c; cin >> a >> b >> c;
        ll res = modcal(a, b, c);
        cout << res << endl;
    }
    return 0;
}
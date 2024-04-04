#include <bits/stdc++.h>
using namespace std;

#define l long
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
        ll n;
        ll sum = INT_MAX;
        cin >> n;
        vector<int> a(n);
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }
        for (ll i = 0; i < n - 1; i++){
            for (ll j = i + 1 ; j < n; j++){
                ll x = a[i] + a[j];
                if (abs(x) < abs(sum)) sum = x;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
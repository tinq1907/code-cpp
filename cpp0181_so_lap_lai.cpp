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
    while (t--){
        ll a, x, y; cin >> a >> x >> y;
        int g = __gcd(x, y);
        for (int i = 0; i < g; i++) cout << a;
        cout << endl;
    }
    return 0;
}

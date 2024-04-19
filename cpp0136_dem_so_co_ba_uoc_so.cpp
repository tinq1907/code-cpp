#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

bool prime_check(ll n){
    if (n < 2) return 0;
    if (n < 4) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (ll i = 5; i <= sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
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
        ll n, cnt = 0;
        cin >> n;
        n = sqrt(n);
        for (int i = 0; i <= n; ++i){
            if (prime_check(i)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
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

ll gen(ll n){
    for (ll j = 2; j <= sqrt(n); ++j){
        if (n % j == 0) return j;
    }
    return n;
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
        ll n; cin >> n;
        for (ll i = 1; i <= n; ++i) {
            if (i == 1 || i == 2) cout << i << " ";
            else if (prime_check(i)) cout << i << " "; 
            else cout << gen(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
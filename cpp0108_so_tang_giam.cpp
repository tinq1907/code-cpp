#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define ull unsigned long long
#define pb push_back

bool check_prime(ll n){
    if (n < 2) return 0;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    if (n < 6) return 1;
    for (int i = 5; i <= sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}
bool check_up(ll n){
    while (n >= 10){
        int r = n % 10;
        if (r <= (n / 10) % 10) return 0;
        n /= 10;
    }
    return 1;
}

bool check_down(ll n){
    while (n >= 10){
        int r = n % 10;
        if (r >= (n / 10) % 10) return 0;
        n /= 10;
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
        int n; cin >> n;
        int cnt = 0;
        ll a = pow(10, n - 1), b = pow(10, n);
        for (ll i = a; i <= b; i++){
            if ((check_up(i) || check_down(i)) && check_prime(i)) cnt++;
            
        }
        cout << cnt << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

bool check(ll a[], ll n, ll sum){
    int l, r;
    l = 0; r = n - 1;
    while (l < r){
        if (a[l] + a[r] == sum) return 1;
        else if (a[l] + a[r] > sum) r--;
        else l++;
    }
    return 0;
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
        bool flag = false;
        int n; cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++){
            ll x; cin >> x;
            a[i] = x * x;
        }
        sort (a, a + n);
        for (int i = 0; i < n; i++){
            ll sum = a[i];
            if (check(a, n, sum)) {
                flag = true;
                break;
            }
        }
        if (flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
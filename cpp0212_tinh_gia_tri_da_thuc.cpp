#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
#define modu 1000000007

ll mult(int x, int n){
    ll p = 1;
    for (int i = 0; i < n; i++){
        p *= x;
        p %= modu;
    }
    return p;
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
        ll sum = 0;
        int n, x; cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            sum += a[i] * mult(x, n - i - 1);
            sum %= modu;
        }
        cout << sum << endl;
    }
    return 0;
}

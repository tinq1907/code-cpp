#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

void sieve(int l, int r){
    int d = r - l + 1;
    int prime[d];
    for (int i = 0; i < d; i++){
        prime[i] = 1;
    }
    for (int i = 2; i < sqrt(r); i++){
        for (int j = max(i*i, (l + i - 1) / i * i); j <= r; j += i){
            prime[j - l] = 0;
        }
    }
    int cnt = 0;
    for (int i = max(l, 2) ; i <= r; i++){
        if (prime[i - l] == 1) cnt++;
    }
    cout << cnt << endl;
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
        int l, r; cin >> l >> r;
        sieve(l, r);
    }
    return 0;
}
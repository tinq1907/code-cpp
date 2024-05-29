#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

long long kadane(int a[], int n){
    ll max_local = a[0], max_global = a[0];
    for (int i = 1; i < n; i++){
        max_local = fmax(a[i], max_local + a[i]);
        if (max_local > max_global) max_global = max_local;
    }
    return max_global;
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
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long max_sum = kadane(a, n);
        cout << max_sum << endl;
    }
    return 0;
}
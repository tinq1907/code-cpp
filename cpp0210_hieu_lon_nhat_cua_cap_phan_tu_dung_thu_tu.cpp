#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int max = INT_MIN;
        for (int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                if (a[j] - a[i] > max) max = a[j] - a[i];
            }
        }
        if (max <= 0) cout << -1 << endl;
        else cout << max << endl;
    }
    return 0;
}

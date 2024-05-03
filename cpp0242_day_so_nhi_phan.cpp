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
        int n; cin >> n;
        int a[n], b[n];
        int res = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        for (int i = 0; i < n; i++){
            int x = 0, y = 0;
            for (int j = i; j < n; j++){
                x += a[j];
                y += b[j];
                if (x == y) {
                    res = max(j - i + 1, res);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}

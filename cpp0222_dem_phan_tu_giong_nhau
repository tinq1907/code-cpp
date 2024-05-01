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
        int tmp[100005] = {};
        int m = INT_MIN;
        int n; cin >> n;
        int a[n][n];
        int cnt = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                m = max(m, a[i][j]);
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (tmp[a[i][j]] == i) tmp[a[i][j]]++;
            }
        }
        for (int i = 0; i <= m; ++i){
            if (tmp[i] == n) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

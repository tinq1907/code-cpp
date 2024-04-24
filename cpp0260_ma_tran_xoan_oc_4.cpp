#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int m = (int)n * n;
    int a[m];
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort (a, a + m);
    int cnt = 0;
    int l = 0, r = n - 1, u = 0, d = n - 1;
    int res[n][n];
    while (l <= r && u <= d){
        for (int i = l; i <= r; i++){
            res[u][i] = a[cnt++];
        }
        u++;
        for (int i = u; i <= d; i++){
            res[i][r] = a[cnt++];
        }
        r--;
        for (int i = r; i >= l; i--){
            res[d][i] = a[cnt++];
        }
        d--;
        for (int i = d; i >= u; i--){
            res[i][l] = a[cnt++];
        }
        l++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
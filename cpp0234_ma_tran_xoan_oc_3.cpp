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

    int t; cin >> t;
    while(t--)
    {
        int n, m, k; cin >> n >> m >> k;
        int l = 0, r = m - 1, u = 0, d = n - 1;
        int c = (int)m * n;
        int a[n][m], b[c];
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j) cin >> a[i][j];
        }
        while (l <= r && u <= d){
            for (int i = l; i <= r; ++i){
                b[cnt++] = a[u][i];
                
            }
            u++;
            for (int i = u; i <= d; ++i){
                b[cnt++] = a[i][r];
            }
            r--;
            if(u <= d){
                for (int i = r; i >= l; --i){
                    b[cnt++] = a[d][i];
                }
                d--;
            }
            if (l <= r){
                for (int i = d; i >= u; --i){
                    b[cnt++] = a[i][l];
                }
                l++;
            }
        }
        cout << b[k - 1];
        cout << endl;
    }
    return 0;
}
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
        int n, m;
        cin >> n >> m;
        int a[n][m], b[m][n];
        for (int i = 0; i < n; i++){
            for (int j  = 0; j < m; j++){
                cin >> a[i][j];
                b[i][j] = a[i][j]; 
            }
        }
        int l = 0, r = m - 1, u = 0, d = n - 1;
        while (l <= r && u <= d){
            for (int i = l + 1; i <= r; i++){
                b[u][i] = a[u][i - 1];
            }
        
            for (int i = u + 1; i <= d; i++){
                b[i][r] = a[i - 1][r];
            }
            
            if (u <= d){
                for (int i = r - 1; i >= l; i--){
                    b[d][i] = a[d][i + 1];
                }
            }
            
            if(l <= r){
                for (int i = d - 1; i >= u ; i--){
                    b[i][l] = a[i + 1][l];
                }
            }
            u++; d--; l++; r--;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << b[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
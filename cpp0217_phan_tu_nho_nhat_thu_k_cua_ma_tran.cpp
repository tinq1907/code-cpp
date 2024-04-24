#include <bits/stdc++.h>
using namespace std;

#define l long
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
        int n, m; cin >> n >> m;
        n = (int)n * n;
        int a[n];
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a, a + n);
        cout << a[m - 1] << endl;
    }
    return 0;
}
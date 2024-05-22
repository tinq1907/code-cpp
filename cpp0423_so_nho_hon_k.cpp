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
        int n, k; 
        cin >> n >> k;
        int d = 0;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] <= k) d++;
        }
        int res = 0, cnt = 0;
        for (int i = 0; i < d; i++){
            if (a[i] <= k) cnt++;
        }
        res = cnt;
        for (int i = d; i < n; i++){
            if (a[i - d] <= k) cnt--;
            if (a[i] <= k) cnt++;
            res = max(res, cnt);
        }
        cout << d - res << endl;
    }
    return 0;
}

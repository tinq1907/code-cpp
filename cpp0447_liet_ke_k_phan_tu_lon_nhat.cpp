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
        int n, val;
        cin >> n >> val;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = n-1 ; i >= n - val; i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
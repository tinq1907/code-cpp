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
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++){
            if (a[i] == a[i + 1] && a[i] != 0){
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if (a[i] != 0) cout << a[i] << " ";
            else cnt++;
        }
        for (int i = 0; i < cnt; i++){
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
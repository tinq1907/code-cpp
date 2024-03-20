#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {   
        int digit[10] = {};
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            while (a[i] > 0){
                int d = a[i] % 10;
                digit[d]++;
                a[i] /= 10;
            }
        }
        for (int i = 0; i <= 9; i++){
            if (digit[i] != 0) cout << i << " ";
        }
        cout << endl;   
    }
}
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
        int a[1005];
        int n ; cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int i = n - 1;
        while(i > 0 && a[i] < a[i + 1]) {
            --i;
        }
        if (i < 1) reverse(a + 1, a + n + 1);
        else{
            swap(a[i], a[n]);
            if(i != n - 1) reverse(a + i + 1, a + n + 1);
        }
        for (int j = 1; j <= n; j++){
            cout << a[j] << " ";
        }
        cout << endl;   
    }
    return 0;
}
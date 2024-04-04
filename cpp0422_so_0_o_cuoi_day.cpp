#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define f(i,a,b) for(int i = a; i < n; ++i)
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
        int n; cin >> n;
        vector<ll> a(n);
        int cnt = 0;
        f(i,0,n) {
            cin >> a[i];
        }
        f(i, 0, n){
            if(a[i] != 0){
                cnt++;
                cout << a[i] << " ";
            }
        }
        for (int i = 0 ; i < n - cnt ; i++){
            cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
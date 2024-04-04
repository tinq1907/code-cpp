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
        int n ; cin >> n; 
        int a[n - 1];
        map<int, bool> mp;
        for (int i = 0 ; i < n - 1; i++){
            cin >> a[i];
            mp[a[i]] = true;
        }
        for (int i = 1 ; i <= n - 1; i++){
            if(mp[i] == false){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
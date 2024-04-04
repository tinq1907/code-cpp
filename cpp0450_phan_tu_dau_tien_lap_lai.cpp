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
        int n; cin >> n;
        int a[n], ans;
        bool flag = false;
        set<int> mp;
        for (int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            if(!mp.insert(a[i]).second){
                ans = a[i];
                flag = true;   
                break;     
            }
            else mp.insert(a[i]);
        }
        if (flag == false) cout << "-1" << endl;
        else cout << ans << endl;
    }
    return 0;
}
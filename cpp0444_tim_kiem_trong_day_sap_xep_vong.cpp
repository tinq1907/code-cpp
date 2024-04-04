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
        int n, val;
        cin >> n >> val;
        map<int, int> mp;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]] = i;
        }
        for(pair<int,int> it : mp){
            if(it.first == val) {
                cout << it.second + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
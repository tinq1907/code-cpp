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
        bool flag = false;
        cin >> n >> val;
        int a[n];
        unordered_map<int, bool> mp;
        for (int i = 0 ; i < n; i++){
            cin >> a[i];
            mp[a[i]] = true;
        }
        for (pair<int, bool> it : mp){
            if(mp[val] == true) {cout << "1" << endl;
                flag = true;
                break;
            }
        }
        if (flag == false) cout << "-1" << endl;
    } 
    return 0;
}
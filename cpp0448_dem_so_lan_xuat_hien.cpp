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
        int cnt = 0;
        bool flag = false;
        cin >> n >> val;
        multimap<int,bool> mp;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp.insert(make_pair(x, true));
        }
        for (pair<int, bool> it : mp){
            if (it.first == val) {
                flag = true;
                cnt++;
            }
        }
        if(flag == true) cout << cnt << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
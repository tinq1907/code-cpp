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
        unordered_map<int, int> mp;
        for (int i = 0 ; i < n; i++){
            cin >> a[i];
            mp.insert(make_pair(a[i], i + 1));
        }
        for (pair<int, int> it : mp){
            if (it.first == val) {
                flag = true;
                cout << it.second << endl;
                break; 
            }
        }
        if (flag == false) cout << "-1" << endl;
    } 
    return 0;
}
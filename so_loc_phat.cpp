#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif */

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        bool flag = true;
        string n;
        cin >> n;
        int l = n.length();
        for (int i = 0; i <= l; i++){
            if (n[i] != '0' && n[i] != '6' && n[i] != '8') flag = false;
            break;
        }
        if (flag == false) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}

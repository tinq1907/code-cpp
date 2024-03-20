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
        string num;
        cin >> num;
        int l = num.length();
        if (num[l-1] == '6' && num[l-2] == '8') cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
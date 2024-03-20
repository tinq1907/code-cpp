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
        string num; cin >> num;
        int l = num.length();
        bool flag = true;
        for (int i = 0; i < l - 1; i++){
            if (num[i] - num[i + 1] != 1 && num[i] - num[i + 1] != -1){
                flag = false;
            }
        }
        if (flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
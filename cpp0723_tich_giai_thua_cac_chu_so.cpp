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
        int n; cin >> n;
        string s; cin >> s;
        string res = "";
        for (int i = 0; i < n; i++){
            if (s[i] == '2') res += "2";
            if (s[i] == '3') res += "3";
            if (s[i] == '4') res += "322";
            if (s[i] == '5') res += "5";
            if (s[i] == '6') res += "53";
            if (s[i] == '7') res += "7";
            if (s[i] == '8') res += "7222";
            if (s[i] == '9') res += "7332";
        }
        sort(res.begin(), res.end(), greater<char>());
        cout << res << endl;
    }
    return 0;
}
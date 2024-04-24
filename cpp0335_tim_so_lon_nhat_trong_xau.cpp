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
        string s; cin >> s;
        vector<int> v;
        string tmp = "";
        int n = s.size();
        for (int i = 0; i < n; i++){
            if (isdigit(s[i]) && isdigit(s[i + 1])) tmp += s[i];
            else if (isdigit(s[i]) && !isdigit(s[i + 1])){
                tmp += s[i];
                v.push_back(stoi(tmp));
                tmp = "";
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        cout << v[0] << endl;
    }
    return 0;
}
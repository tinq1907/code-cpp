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

    string cc = "@ptit.edu.vn";
    int t; cin >> t;
    cin.ignore();
    map<string, int> mp;

    while(t--)
    {
        string res;
        vector<string> v;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp){
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            v.push_back(tmp);
        }
        res = v.back();
        for (int i = 0; i < v.size() - 1; i++){
            res += v[i][0];
        }
        mp[res]++;
        cout << res;
        if (mp[res] > 1) cout << mp[res];
        cout << cc;
        cout << endl;
    }
    return 0;
}

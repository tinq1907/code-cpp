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
    cin.ignore();
    while(t--)
    {
        string s, tmp;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        while (ss >> tmp){
            v.push_back(tmp);
        }
        int n = v.size();
        for (int i = n - 1; i >= 0; --i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
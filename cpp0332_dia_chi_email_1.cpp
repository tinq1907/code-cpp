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
    
    string s;
    getline(cin, s);
    int n = s.size();
    for (int i = 0 ; i < n; i++){
        s[i] = tolower(s[i]);
    }
    vector<string> v;
    string tmp;
    stringstream ss(s);
    while (ss >> tmp) v.push_back(tmp);
    cout << v.back();
    for (int i = 0; i < v.size() - 1 ; i++){
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
    return 0;
}
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
        int num = 0;
        string word = "";
        for (int i = 0; i < s.size(); i++){
            if(isdigit(s[i])) num += s[i] - '0';
            else word += s[i];
        }
        sort(word.begin(), word.end());
        cout << word << num << endl;
    }
    return 0;
}

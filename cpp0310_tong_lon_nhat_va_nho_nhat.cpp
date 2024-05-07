#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

ll max (string &s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] == '5') s[i] = '6';
    }
    return stoll(s);
}

ll min(string &s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] == '6') s[i] = '5';
    }
    return stoll(s);
}

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
        string a, b;
        cin >> a >> b;
        ll summin = (ll)min(a) + min(b);
        ll summax = (ll)max(a) + max(b);
        cout << summin << " " << summax << endl;
    }
    return 0;
}
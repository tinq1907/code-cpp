    #include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
bool divi_by_11(string s, ll n){
    ll sum1 = 0, sum2 = 0;
    for (ll i = 0; i < n; ++i){
        if (i % 2 != 0) sum1 += s[i] - '0'; // convert char to int
        else sum2 += s[i] - '0';
    }
    ll sum = (ll)sum1 - sum2;
    if (sum % 11 == 0) return true;
    return false;
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
        string s;
        cin >> s;
        ll n = s.size();
        if (divi_by_11(s, n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}

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

    ll fibo[100];
    unordered_map <ll, bool> mp;
    fibo[0] = 0;
    fibo[1] = 1;
    mp[fibo[0]] = true;
    mp[fibo[1]] = true;
    for (int i = 2; i <= 92; ++i){
    	fibo[i] = fibo[i - 2] + fibo[i - 1];
        mp[fibo[i]] = true;
	}

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            auto it = mp.find(a[i]);
            if (it != mp.end()) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
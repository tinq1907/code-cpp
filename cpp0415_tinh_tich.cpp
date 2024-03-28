#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int m, n;
		cin >> m >> n;
		ll a[m], b[n];
		for (int i = 0; i < m; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
		sort(a, a + m);
		sort(b, b + n);
		ll p = (ll)a[m - 1] * (ll)b[0];
		cout << p << endl; 
	}
    return 0;
}

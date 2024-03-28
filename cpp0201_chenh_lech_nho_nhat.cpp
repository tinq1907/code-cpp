#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		ll dif = 1e9;
		ll ar[n];
		for (int i = 0; i < n; i++){
			cin >> ar[i];
		}
		sort(ar, ar + n);
		for (int i = 0; i < n; i++){
			if (abs(ar[i] - ar[i + 1]) < dif) dif = abs(ar[i] - ar[i + 1]);
		}
		cout << dif << endl;
	}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; ++i){
			cin >> a[i];
		}
		for (int i = 0; i < k; ++i){
			int p, q;
			cin >> p >> q;
			int sum = 0;
			for (int j = p - 1; j < q; ++j){
				sum += a[j];
			}
			cout << sum << endl;
		}
	}
    return 0;
}

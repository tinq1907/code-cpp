#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int n;
		ull k;
		cin >> n >> k;
		ull sum = 0;
		for (int i = 1; i <= n; ++i){
			sum += i % k;
		}
		cout << sum << endl;
		sum = 0;
	}
    return 0;
}

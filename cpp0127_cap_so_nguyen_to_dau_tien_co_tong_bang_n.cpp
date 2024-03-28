#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool prime_check(ll n){
	if (n < 2) return false;
	if (n == 3 || n == 2) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (ll i = 5; i * i <= n; i += 6){
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; ++i){
		bool flag = false;
		ll n; cin >> n;
		for (ll i = 1; i <= n; i++){
			if (prime_check(i) && prime_check(n - i)) {
				if (i > n - i) cout << n - i << " " << i << endl;
				else cout << i << " " << n - i << endl;
				flag = true;
				break;
			}
		}
		if (flag == false) cout << "-1" << endl;
	}
    return 0;
}

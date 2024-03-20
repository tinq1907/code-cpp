#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;
bool prime_check(ll n){
	if (n < 2) return false;
	if (n == 3 || n == 2) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (ll i = 5; i * i <= n; i += 6){
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}
void solve(){
	ll n;
	cin >> n;
	if (prime_check(n)) {
		cout << n << endl;
		return;
	}
	ll r ;
	for (ll i = 2; i <= sqrt(n); ++i){
		if (n % i == 0){
			if (prime_check(n / i)) {
				cout << n / i << endl;
				return;
			}
			if (prime_check(i)) r = i;
		}
	}
	cout << r << endl;
}
int main()
{
	int t; cin >> t;
	while (t--){
		solve();
	}
    return 0;
}

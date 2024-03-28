#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long; 

bool prime_check(ll n){
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
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
	while (t--){
		int n;
		cin >> n;
		n = sqrt(n);
		for (int i = 0; i <= n; ++i ){
			if (prime_check(i)) cout << i * i << " ";
		}
		cout << endl;
	}
    return 0;
}

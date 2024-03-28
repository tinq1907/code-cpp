#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
ll prime[1000001];
ll d = 1000000;
void sieve(){
	for (ll i = 0; i <= d; ++i){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (ll i = 2; i <= d; ++i){
		if (prime[i] == 1){
			for (ll j = i * i; j <= d; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		ll n; cin >> n;
		sieve();
		for (ll i = 0; i <= n; ++i){
			if (prime[i] == 1) cout << i << " ";
		}
		cout << endl;
	}
    return 0;
}

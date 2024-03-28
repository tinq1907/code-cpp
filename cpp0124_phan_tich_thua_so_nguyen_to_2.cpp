#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool prime_check(ll n){
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (ll i = 5; i * i <= n; i += 6){
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    ll n;
	cin >> n;
	
	for (ll i = 2; i * i <= n; i++){
		int dem = 0;
		while (n % i == 0){				
			dem++;
			n /= i;
			if (n % i != 0){	
				cout << i << " " << dem << endl;
			}
		}
		if (n == 1) break;
	}
	if (prime_check(n)) cout << n << " 1" << endl;
	return 0;
}

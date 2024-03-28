#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; ++i){
		ll n;
		for (ull i = 2; i * i <= n ; i++){
			while (n % i == 0){
				n /= i;
				cout << i << " "; 
				if (n == 1) break;
			}
		}
		if (n > 1) cout << n;
			cout << endl;
	}
    return 0;
}

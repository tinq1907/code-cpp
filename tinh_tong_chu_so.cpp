#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int sum_of_digit(int n){
	int sum = 0;
	while (n != 0){
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; ++i){
		int n; cin >> n;
		while (n >= 10){
			n = sum_of_digit(n);
		}
		cout << n << endl;
	}
    return 0;
}

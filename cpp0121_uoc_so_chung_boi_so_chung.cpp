#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int a, int b){
	int r = a % b;
	while (r != 0){
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}

int lcm (int a, int b){
	return (a * b) / gcd(a, b);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		cout << lcm (a, b) << " " << gcd(a, b) << endl;
	}
    return 0;
}

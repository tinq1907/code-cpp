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
    int t; cin >> t;
    for (int i = 0; i < t; i++){
    	int n;
    	int result = 1;
    	cin >> n;
    	for (int i = 1; i <= n; i++){
    		int g = gcd(result, i);
    		result = result * i / g;
		}
		cout << result << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ull fibo[92];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; ++i){
    	fibo[i] = fibo[i - 2] + fibo[i - 1];
	}
	int t; cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << fibo[n] << endl;
	}
    return 0;
}

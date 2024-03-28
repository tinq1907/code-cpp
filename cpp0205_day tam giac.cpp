#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int max = 0;
		int n; cin >> n; 
		int a[n];
		for (int i = 0; i < n; ++i){
			cin >> a[i];
			if (a[i] > max) max = a[i];
		}
		cout << max << endl;
	}
    return 0;
}

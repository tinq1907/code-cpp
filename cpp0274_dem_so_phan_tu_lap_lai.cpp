#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int n, cnt = 0;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++){
			if (a[i] == a[i + 1] && a[i] != a[i - 1]) cnt += 2;
			else if (a[i] == a[i + 1]) cnt++; 
		} 
		cout << cnt << endl;
	}
    return 0;
}

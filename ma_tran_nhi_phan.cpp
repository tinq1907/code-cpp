#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	int cnt = 0;
	int a[n][n];
	for (int i = 0; i < n; ++i){
		int dem = 0;
		for (int j = 0; j < 3; ++j){
			cin >> a[i][j];
			if (a[i][j] == 1) dem++;
		}
		if (dem > 1) cnt++;
		dem = 0; 
	}
	cout << cnt;
    return 0;
}

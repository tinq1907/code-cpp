#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int m, n, p;
	cin >> m >> n >> p;
	int a[m][n], b[n][p];
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}
	for (int j = 0; j < n; ++j){
		for (int k = 0; k < p; ++k){
			cin >> b[j][k];
		}
	}
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < p; ++j){
			int sum = 0;
			for (int k = 0; k < n; ++k){
				sum += a[i][k] * b[k][j]; 
			}
			cout << sum << " ";
		}
		cout << endl;
	}
    return 0;
}

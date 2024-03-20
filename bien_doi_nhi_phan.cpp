#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int n, m; cin >> n >> m;
		int a[n][m], row[100] = {0}, col[100] = {0};
		
		
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
				if (a[i][j] == 1) {
					row[i] = 1;
					col[j] = 1;
				}
			}
		}
		
		
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (row[i] == 1 || col[j] == 1){
					a[i][j] = 1;
				}
			}
		}
		
		
		for (int i = 0; i < n; i++){
			for (int j = 0 ; j < m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
    return 0;
}

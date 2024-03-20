#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int a, m;
		int flag = 0;
		cin >> a >> m;
		for (int i = 0; i < m; i++){
			if ((a * i) % m == 1) {
				cout << i << endl;
				flag = 1; 
				break;
			}
		}
		if (flag == 0) cout << "-1" << endl;
	}
    return 0;
}

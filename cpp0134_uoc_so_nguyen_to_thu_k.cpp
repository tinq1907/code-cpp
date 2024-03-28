#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int pcd[10000] = {-1};
	int t; cin >> t;
	while (t--){
    	int cnt = 0;
		int n, k; 
		cin >> n >> k;
		for (int i = 2; i <= n; ++i){
			while(n % i == 0){
				pcd[cnt++] = i;
				n /= i;
				if (n == 1){
					break;
				}
			}
		}
		if (k > cnt) cout << "-1" << endl;
		else cout << pcd[k - 1] << endl;
	}
    return 0;
}

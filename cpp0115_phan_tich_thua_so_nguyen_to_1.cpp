#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int n;
		cin >> n;
		while (n > 1){
			for (int i = 2; i <= n; i++){
				int dem = 0;
				while (n % i == 0){
					n /= i;
					dem++;
					if (n % i != 0){
						cout << i << " " << dem <<" ";
					}
				}
			}
		}
		cout << endl;
	}
    return 0;
}

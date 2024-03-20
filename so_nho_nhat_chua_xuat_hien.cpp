#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--){
		int cnt = 1;
		int n; 
		cin >> n;
		map <int, int> mp;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]] = 1;	
		}
		while (mp[cnt] != 0){
			cnt++;
		}
		cout << cnt << endl;
	}
    return 0;
}

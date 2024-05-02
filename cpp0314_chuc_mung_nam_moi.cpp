#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; 
	cin >> n;
	string s[n];
	cin.ignore();
	for (int i = 0; i < n ; i++){
		getline(cin, s[i]);
	}
	int cnt = 0;
	sort (s, s + n);
	for (int i = 0; i < n - 1; i++){
		if (s[i] != s[i + 1]) cnt++;
	}
	cout << cnt + 1;
	return 0;
}   
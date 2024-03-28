#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
bool check_even_palim(string s, int n){
	for (int i = 0; i <= n / 2; ++i){
		if (s[i] != s[n - 1 - i] || s[i] % 2 != 0) return false;
	}
	return true;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int n = s.size();
		if(!check_even_palim(s, n)) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
    return 0;
}

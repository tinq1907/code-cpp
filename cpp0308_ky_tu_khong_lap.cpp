#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	cin.tie(NULL);
    cout.tie(NULL);
    test{
    	int check[10000] = {};
		string s;
		cin >> s;
		int n = s.size();
		for (int i = 0; i < n; i++){
			check[s[i]]++;
		}
		for (int i = 0 ; i < n; i++){
			if (check[s[i]] <= 1) cout << s[i];
		}
		cout << endl;
	}
    return 0;
}

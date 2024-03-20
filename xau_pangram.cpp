#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    test{
    	cin.ignore();
    	int tmp[200] = {};
		string s;
		int k;
		cin >> s >> k;
		int n = s.size();
		for (int i = 0; i < n; ++i){
			tmp[s[i]]++;			
		}
		for (int i = 97; i < 123 ; ++i){
			if (!tmp[i]) k--;
		}
		if (k >= 0) cout << "1" << endl;
		else cout << "0" << endl;
	}
    return 0;
}

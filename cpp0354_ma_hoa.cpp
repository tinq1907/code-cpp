#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

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
		int dem = 1;
		int flag = true;
		for (int i = 0; i <= n - 1; i++){
			if (s[i] == s[i + 1]) dem++;
			else {
				cout << s[i] << dem;
				dem = 1;
				flag = false;
			}
		}
		if (flag == true) cout << s[0] << dem << endl;
		else cout << endl;
	}
    return 0;
}
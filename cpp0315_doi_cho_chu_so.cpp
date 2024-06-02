#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

string solve(string &s){
    int n = s.size();
    for (int i = n - 1; i > 0; i--){
        if (s[i] < s[i - 1]){
            int x = i;
            for (int j = i; j < n; j++){
                if (s[j] > s[x] && s[j] < s[i - 1]){
                    x = j;
                }
            }
            swap(s[i - 1], s[x]);
            return s;
        }
    }
    return "-1";
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
        cout << solve(s) << endl;
	}
	return 0;
}
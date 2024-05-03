#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

bool check(string s ){
    int n = 0;
	for (int i = 0; i < s.length(); i++) {
		n += s[i] - '0';
	}
	if (n == 9)return 1;
	while (n >= 9) {
		int a = 0;
		while (n) {
			a += n % 10;
			n /= 10;
		}
		if (a == 9)return 1;
		n = a;
	}
	return 0;
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
        string n; cin >> n;
        if (check(n)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}

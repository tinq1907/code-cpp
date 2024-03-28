#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int cnta[1005] = {0};
	int n; cin >> n;
	int a[n];
	int max = 0;
	for (int i = 0; i < n; ++i){
		cin >> a[i];
		if (a[i] > max) max = a[i];
		cnta[a[i]]++;
	}
	for (int i = 0; i <= max; ++i){
		if (cnta[i] > 0) cout << i << " ";
	}
    return 0;
}

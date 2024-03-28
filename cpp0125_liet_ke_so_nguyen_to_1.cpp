#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool prime_check(long long n){
	if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
	/*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	*/

    ios::sync_with_stdio(false); cin.tie(0);

    ll a, b;
    cin >> a >> b;
    if (a > b) swap (a,b);
    for (long long i = a + 1; i < b; i++){
        if (prime_check(i)) cout << i << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool prime_check(int n){
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 3 == 0 || n % 2 == 0) return false;
    for (int i = 5; i * i <= n; i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    if (prime_check(t)) cout << "YES";
    else cout << "NO";
    return 0;
}
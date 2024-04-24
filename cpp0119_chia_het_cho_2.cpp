#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define ull unsigned long long
#define pb push_back
l solve(l n){
    int count = 0;
    if (n % 2 != 0) return 0;
    for (int i = 2; i <= n ; i += 2){
        if ( n % i == 0 &&i % 2 == 0) count++;
    }
    return count;
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
        l n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
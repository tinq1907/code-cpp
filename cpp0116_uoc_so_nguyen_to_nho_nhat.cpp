#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define ull unsigned long long
#define pb push_back

bool check_prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3 || n == 5 || n == 7) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int divi(int n){
    if (n == 1) return 1;
    if (check_prime(n)) return n;
    int num = INT_MAX;
    for (int i = 2 ; i <= sqrt(n); i++){
        if (i < num && n % i == 0 && check_prime(i)) num = i;
    }
    return num;
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
        int n; cin >> n;
        for (int i = 1; i <= n; i++){
            cout << divi(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
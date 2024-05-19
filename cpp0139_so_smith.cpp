#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

int sod(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sodivi(int n){
    int sum = 0;
    for (int i = 2; i <= n; i++){
        while (n % i == 0 && n > 0){
            sum += sod(i);
            n /= i;
        }
    }
    return sum;
}

bool check_prime(ll n){
    if (n < 2) return 0;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    if (n < 6) return 1;
    for (int i = 5; i <= sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
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
        int n; 
        cin >> n;
        if(!check_prime(n)){
            if (sod(n) == sodivi(n)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
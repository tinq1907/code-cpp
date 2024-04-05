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
bool check_sphenic(int n){
    int cnt = 0;
    if (check_prime(n)) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int tmp = 0;
            cnt++;
            while (n % i == 0){
                tmp++;
                if (tmp > 1) return 0;
                n /= i;
            }
        }
    }
    if (n != 1) cnt++;
    if (cnt == 3) return 1;
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
        int n;
        cin >> n;
        if (check_sphenic(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
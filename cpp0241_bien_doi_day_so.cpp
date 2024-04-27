#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

int solve(int a[], int n){
    int cnt = 0;
    for (int i = 0, j = n - 1; i <= j;){
        if (a[i] == a[j]){
            i++;
            j--;
        }
        else if(a[i] < a[j]){
            a[i + 1] = a[i + 1] + a[i];
            i++;
            cnt++;
        }
        else{
            a[j - 1] = a[j] + a[j - 1];
            j--;
            cnt++;
        }
    }
    return cnt;
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
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << solve(a, n) << endl;
    }
    return 0;
}
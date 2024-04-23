#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
bool checkmount(int a[], int n, int l, int r){
    int check = -1;
    for (int i = l; i < r; ++i){
        if (a[i] > a[i + 1]){
            check = i;
            break;
        }
    }
    if (check != -1){
        for (int i = check; i < r; ++i){
            if (a[i] < a[i + 1]){
                check = -2;
                break;
            }
        }
    }
    if(check == -2) return 0;
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
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int l, r; cin >> l >> r;
        if (checkmount(a, n, l, r)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
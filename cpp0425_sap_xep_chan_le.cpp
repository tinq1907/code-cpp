#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

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
        int a[n], b[n];
        int j = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i += 2){
            b[i] = a[j++];
        }
        for (int i = 1; i < n; i += 2){
            b[i] = a[j++];
        }
        for (int i = 0; i < n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
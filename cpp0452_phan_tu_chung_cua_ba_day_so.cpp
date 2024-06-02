#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

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
        ll n1, n2, n3;
        bool flag = 0;
        map<ll, ll> mp;
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3];
        for (ll i = 0; i < n1; i++){
            cin >> a[i];
        }
        for (ll i = 0; i < n2; i++){
            cin >> b[i];
        }
        for (ll i = 0; i < n3; i++){
            cin >> c[i];
        }
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && b[j] == c[k]){
                flag = 1;
                cout << a[i] << " ";
                i++; j++; k++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else if (b[j] < c[k]){
                j++;
            }
            else k++;
        }
        if (flag == 0) cout << "-1";
        cout << endl;
    }
    return 0;
}

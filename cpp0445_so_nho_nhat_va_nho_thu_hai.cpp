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
        bool flag = false;
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i != 0 && a[i] != a[i - 1]) flag = true;
        }
        if(flag == false) cout << "-1" << endl;
        else{
            sort(a, a + n);
            cout << a[0] << " ";
            for (int i = 1; i < n; i++){
                if (a[i] != a[0]){ 
                    cout << a[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
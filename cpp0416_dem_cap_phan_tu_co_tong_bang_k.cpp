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
        int n, val;
        cin >> n >> val;
        vector<int> v(n);
        for (int i = 0 ; i < n; i++){
            cin >> v[i];
        }
        int cnt = 0;
        for(int i = 0; i < n - 1; i++){
            for (int j = i + 1 ; j < n; j++){
                if(v[i] + v[j] == val) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
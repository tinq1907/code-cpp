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
        int max = INT_MIN;
        int cnt[100005] = {};
        vector<int> v1;
        vector<int> v2;
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for (int i = 0 ; i < n; i++){
            cin >> a[i];
            if (a[i] > max) max = a[i];
            cnt[a[i]]++;
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
            if (b[i] > max) max = b[i];
            cnt[b[i]]++;
        }
        for (int i = 0; i <= max; i++){
            if (cnt[i] > 0) v1.push_back(i);
        }
        for (int i = 0; i <= max; i++){
            if (cnt[i] > 1) v2.push_back(i);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for(int i = 0; i < v1.size(); i++){
            cout << v1[i] << " ";
        }
        cout << endl;
        for (int i = 0 ; i < v2.size(); i++){
            cout << v2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
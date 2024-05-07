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
        int check = -1;
        int n, x; cin >> n >> x;
        int a[n];
        set<int> sex;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sex.insert(a[i]);
        }
        for (int i = 0; i < n; i++){
            int tmp = x + a[i];
            if (sex.find(tmp) != sex.end() && check == -1){
                check = 1;
                break;
            }
        }
        cout << check << endl;
    }
    return 0;
}
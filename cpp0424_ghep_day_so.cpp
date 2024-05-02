#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define f(i,a,b) for(int i = a; i < b; ++i)
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
        int k, n;
        cin >> k >> n;
        int p = k * n;
        int v[p];
        cin.ignore();
        f(i, 0, p){
            cin >> v[i];
        }
        sort(v, v + p);
        f(i, 0, p){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
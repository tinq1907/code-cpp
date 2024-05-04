#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

struct cc{
    int h, m, s;
};

bool cmp(cc a, cc b){
    if (a.h == b.h){
        if(a.m == b.m){
            return a.s < b.s;
        }
        return a.m < b.m;
    }
    return a.h < b.h;
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
    int n; cin >> n;
    cc a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].h >> a[i].m >> a[i].s;
    }
    sort (a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
    }
    return 0;
}
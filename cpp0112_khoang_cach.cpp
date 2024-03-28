#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        cout << setprecision(4) << fixed << dis << endl;
    }
    return 0;
}

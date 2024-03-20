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
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int min = 0;
        int max = n - 1;
        while (min <= max){
            if (min == max) {
                cout << a[min] << " ";
                break;
            }
            else {
                cout << a[max--] << " " << a[min++] << " ";
            }
        }
        cout << endl;
    }
}

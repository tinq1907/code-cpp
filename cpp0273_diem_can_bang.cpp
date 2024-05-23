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
        int n; 
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        int anchor = -1;
        int sum_left = 0;
        int sum_right = sum - a[0];

        for(int i = 1; i < n - 1; i++){
            sum_left += a[i - 1];
            sum_right -= a[i];
            if (sum_left == sum_right){
                anchor = i + 1;
                break;
            }
        }
        cout << anchor << endl;
    }
    return 0;
}
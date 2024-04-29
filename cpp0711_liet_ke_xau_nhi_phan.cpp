#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

bool check = 0;
int a[100] = {0};

void sinh(int a[], int n){
    int i = n - 1;
    while (i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i < 0){
        check = 1;
    }
    else{
        a[i] = 1;
    }
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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        while(check == 0){
            for (int i = 0; i < n; i++){
                cout << a[i];
            }
            cout << " ";
            sinh(a, n);
        }
        cout << endl;
        check = 0;
        a[100] = {0};
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define ull unsigned long long
#define pb push_back

int sod(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
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

    int m, s;
    int min = INT_MAX;
    cin >> m >> s;
    int a = pow(10, m - 1), b = pow(10, m);
    for (int i = a; i < b; i++){
        int tmp = sod(i);
        if (tmp == s && tmp < min) min = tmp; 
    }
    cout << min << endl;
}
#include <bits/stdc++.h>
using namespace std;

void sub(string a, string b){
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    if (b > a) swap(a, b);
    int carry = 0;
    string res = "";

    for (int i = a. size() - 1; i >= 0; i--){
        int diff = (a[i] - '0') - (b[i] - '0') - carry;
        if (diff >= 0) {
            carry = 0;
        }
        else {
            diff += 10;
            carry = 1;
        }
        res += to_string(diff);
    }
    for (int i = res.size() - 1; i >= 0; i--){
        cout << res[i];
    }
}

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
        string a, b; cin >> a >> b;
        sub(a, b);
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

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

void sum (string a, string b){
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    int carry = 0;
    string res = "";
    for (int i = a.size() - 1; i >= 0; i--){
        int tmp = a[i] - '0' + b[i] - '0';
        if (tmp + carry >= 10){
            res += ('0' + ((tmp + carry) % 10));
            carry = 1;
        }
        else{
            res += ('0' + (tmp + carry));
            carry = 0;
        }
    }
    if(carry == 1) res += "1";
    for (int i = res.size() - 1; i >= 0; i--){
        cout << res[i];
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
        
    }
    return 0;
}
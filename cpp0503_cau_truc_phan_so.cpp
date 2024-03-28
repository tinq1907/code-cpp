#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
struct PhanSo{
    ull tu;
    ull mau;
};
void nhap (PhanSo &a){
    cin >> a.tu >> a.mau;
}
void rutgon (PhanSo &a){
    ull p = __gcd(a.tu, a.mau);
    a.tu /= p;
    a.mau /= p;
}
void in (PhanSo a){
    cout << a.tu << "/" << a.mau;
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

    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);

    return 0;
}
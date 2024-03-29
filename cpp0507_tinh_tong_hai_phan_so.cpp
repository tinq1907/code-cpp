#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define F(i,a,b) for(ull i = a; i < n; ++i)
#define pb push_back

struct PhanSo {
    ull tu;
    ull mau;
};

void nhap (PhanSo &a){
    cin >> a.tu >> a.mau;
}

PhanSo tong (PhanSo a, PhanSo b){
    PhanSo c;
    ull p = (a.mau * b.mau) /__gcd(a.mau, b.mau) ;
    c.tu =  (ull)(a.tu * (p / a.mau) + b.tu * (p / b.mau));
    c.mau = p;
    ull q = __gcd(c.tu, c.mau); 
    c.tu /= q;
    c.mau /= q;
    return c;
}

void in(PhanSo a){
    cout << a.tu << "/" << a.mau;
}
ull main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

class PhanSo{
    private:
        ll tu, mau;
    public:
        friend istream &operator >> (istream &mycin, PhanSo &a);
        friend ostream &operator << (ostream &mycout, PhanSo a);
        friend PhanSo operator + (PhanSo &a, PhanSo &b);
        PhanSo (int t , int m ){
            t = 1;
            m = 1;
        }
        friend PhanSo rg(PhanSo &a);
};

istream &operator >> (istream &mycin, PhanSo &a){
    mycin >> a.tu >> a.mau;
    return mycin;
}

PhanSo operator + (PhanSo &a, PhanSo &b){
    ll g = __gcd(a.mau, b.mau);
    ll l = (ll)(a.mau * b.mau) / g;
    PhanSo c(1,1);
    c.mau = l;
    c.tu = (ll)(l / a.mau) * a.tu + (ll)(l / b.mau) * b.tu;
    return c;
}   

PhanSo rg(PhanSo &a){
    ll g = __gcd(a.tu, a.mau);
    a.tu = a.tu / g;
    a.mau = a.mau / g;
    return a;
}

ostream &operator << (ostream &mycout, PhanSo a){
    a = rg(a);
    mycout << a.tu << "/" << a.mau;
    return mycout;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

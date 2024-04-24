#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define ull unsigned long long
#define pb push_back

class PhanSo{
    private:
        ll tu;
        ll mau;
    public:
        friend istream &operator >> (istream &nhap , PhanSo &a);
        friend ostream &operator << (ostream &xuat , PhanSo a);
        void rutgon(){
            ll g = __gcd(tu, mau);
            tu = tu / g;
            mau = mau / g;
        }
        PhanSo(ll t = 1, ll m = 1){
            tu = t;
            mau = m;
        }
};

istream &operator >> (istream &nhap, PhanSo &a){
    nhap >> a.tu >> a.mau;
    return nhap;
}

ostream &operator << (ostream &xuat, PhanSo a){
    xuat << a.tu << "/" << a.mau;
    return xuat;
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

    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	
    return 0;
}
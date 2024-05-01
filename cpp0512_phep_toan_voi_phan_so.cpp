#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

struct PhanSo{
    ll tu;
    ll mau;
};

PhanSo simplify(PhanSo a){
    int G = __gcd(a.mau, a.tu);
    a.tu = a.tu / G;
    a.mau = a.mau / G;
    return a;
}

PhanSo sumsum (PhanSo a, PhanSo b){
    PhanSo sum;
    int g = __gcd(a.mau, b.mau);
    int l = (int)(a.mau * b.mau) / g;
    int m1 = l / a.mau, m2 = l / b.mau;
    sum.mau = l;
    sum.tu = a.tu * m1 + b.tu * m2;
    sum.mau *= sum.mau;
    sum.tu *= sum.tu;
    return simplify(sum);
}

PhanSo product(PhanSo a, PhanSo b, PhanSo c){
    PhanSo p;
    p.tu = a.tu * b.tu * c.tu;
    p.mau = a.mau * b.mau * c.mau;
    return simplify(p);
}

void process(PhanSo a, PhanSo b){
    PhanSo s = sumsum(a, b);
    PhanSo p = product(a, b, s);
    cout << s.tu << "/" << s.mau << " " << p.tu << "/" << p.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
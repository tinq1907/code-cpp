#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
struct ThiSinh{
    string name;
    string date;
    float p1;
    float p2;
    float p3;
};
void nhap(ThiSinh &a){
    getline(cin, a.name);
    cin >> a.date >> a.p1 >> a.p2 >> a.p3;
}
void in(ThiSinh a){
    float p = a.p1 + a.p2 + a.p3;
    cout << a.name << " " << a.date << " " << setprecision(1) << fixed << p;
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

    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
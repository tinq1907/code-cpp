#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define f(i,a,b) for(int i = a; i < n; ++i)
#define pb push_back

struct NhanVien{
    string name, gen, dob, add, tax, doc;
};
int z = 0;
void nhap(NhanVien &a){
    if (z == 0) cin.ignore();
    z++;
    getline(cin, a.name);
    getline(cin, a.gen);
    getline(cin, a.dob);
    getline(cin, a.add);
    getline(cin, a.tax);
    getline(cin, a.doc);
}

void inds(NhanVien a[], int n){
    f(i, 0, n){
        string s;
        if (i < 9) s = "0000";
        else s = "000";
        cout << s << i+1 << " " << a[i].name << " " << a[i].gen << " " << a[i].dob << " " << a[i].add << " " << a[i].tax << " " << a[i].doc;
        cout << endl;
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

    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);

    return 0;
}
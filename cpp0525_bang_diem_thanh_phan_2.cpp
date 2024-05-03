#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

struct SinhVien{
    string id;
    string name;
    string mclass;
    string s1, s2, s3;
};

void nhap (SinhVien &a){
    cin >> a.id;
    cin.ignore();
    getline(cin, a.name);
    cin >> a.mclass >> a.s1 >> a.s2 >> a.s3;
}

bool cmp (SinhVien a, SinhVien b){
    return a.name > b.name;
}

void sap_xep(SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien a[], int n){
    int cnt = 1;
    for (int i = 0; i < n; i++){
        cout << cnt++ << " " << a[i].id << " " << a[i].name << " " << a[i].mclass << " " << a[i].s1 << " " << a[i].s2 << " " << a[i].s3 << endl;
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

    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
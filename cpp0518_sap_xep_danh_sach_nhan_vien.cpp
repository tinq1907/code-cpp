#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int cnt = 1;

struct NhanVien{
    string id;
    string name;
    string gen;
    string dob;
    string add;
    string tax;
    string doc;
    int d,m,y;
};

void nhap (NhanVien &a){
    if(cnt == 1) cin.ignore();
    if (cnt < 10){
        a.id = "0000" + to_string(cnt++);
    }
    else a.id = "000" + to_string(cnt++);
    getline(cin, a.name);
    getline(cin, a.gen);
    getline(cin, a.dob);
    getline(cin, a.add);
    getline(cin, a.tax);
    getline(cin, a.doc);
    a.m = (a.dob[0] - '0') * 10 + a.dob[1] - '0';
    a.d = (a.dob[3] - '0') * 10 + a.dob[4] - '0';
    a.y = (a.dob[6] - '0') * 1000 + (a.dob[7] - '0') * 100 + (a.dob[8] - '0') * 10 + a.dob[9] - '0'; 
}

bool cmp (NhanVien a, NhanVien b){
    if (a.y == b.y){
        if (a.m == b.m){
            return a.d < b.d;
        }
        return a.m < b.m;
    }
    return a.y < b.y;
}

void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].gen << " " << a[i].dob << " " << a[i].add << " " << a[i].tax << " " << a[i].doc << endl;
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
    sapxep(ds, N);
    inds(ds, N);

    return 0;
}
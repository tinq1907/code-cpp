#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
int cnt = 1;
struct cc {
    int id;
    string code, name, mclass, email, comp;
};

void in(cc &a){
    a.id = cnt++;
    getline(cin, a.code);
    getline(cin, a.name);
    getline(cin, a.mclass);
    getline(cin, a.email);
    getline(cin, a.comp);
}

void out(cc a){
    cout << a.id << " " << a.code << " " << a.name << " " << a.mclass << " " << a.email << " " << a.comp;
}

bool cmp(cc a, cc b){
    return a.code < b.code;
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
    int n; cin >> n;
    cin.ignore();
    cc a[n];
    for (int i = 0; i < n; i++){
        in(a[i]);
    }
    sort(a, a + n, cmp);
    int m; cin >> m;
    cin.ignore();
    while (m--){
        string tmpcomp;
        getline(cin, tmpcomp);
        for (int i = 0; i < n; i++){
            if (a[i].comp == tmpcomp){
                out(a[i]);
                cout << endl;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

class comp{
    public:
        string code;
        string name;
        int num;
        friend void arrange(comp a[], int n);
        friend istream &operator >> (istream &in, comp &a);
        friend ostream &operator << (ostream &out, comp a);
};

istream &operator >> (istream &in, comp &a){
    cin >> a.code;
    cin.ignore();
    getline(cin, a.name);
    cin >> a.num;
    return in;
}

ostream &operator << (ostream &out, comp a){
    cout << a.code << " " << a.name << " " << a.num;
    return out;
}

bool cmp(comp a, comp b){
    if (a.num == b.num) return a.code < b.code;
    return a.num > b.num;
}

void arrange(comp a[], int n){
    sort(a , a + n , cmp);
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
    comp a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    arrange (a, n);
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
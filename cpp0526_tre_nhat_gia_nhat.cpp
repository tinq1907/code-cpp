#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
struct cc{
    string name;
    string dob;
    int d,m,y;
};

void input (cc a){
    cin >> a.name >> a.dob;
    a.d = (a.dob[0] - '0') * 10 + a.dob[1] - '0';
    a.m = (a.dob[3] - '0') * 10 + a.dob[4] - '0';
    a.y = (a.dob[6] - '0') * 1000 + (a.dob[7] - '0') * 100 + (a.dob[8] - '0') * 10 + a.dob[9] - '0'; 
}

bool cmp (cc a, cc b){
    if (a.y == b.y){
        if (a.m == b.m){
            return a.d > b.d;
        }
        return a.m > b.m;
    }
    return a.y > b.y;
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
    cc a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].dob;
        a[i].d = (a[i].dob[0] - '0') * 10 + a[i].dob[1] - '0';
        a[i].m = (a[i].dob[3] - '0') * 10 + a[i].dob[4] - '0';
        a[i].y = (a[i].dob[6] - '0') * 1000 + (a[i].dob[7] - '0') * 100 + (a[i].dob[8] - '0') * 10 + a[i].dob[9] - '0';
    }
    sort (a, a + n, cmp);
    cout << a[0].name << endl << a[n - 1].name;
    return 0;
}
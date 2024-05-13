#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
int cnt = 1;

struct gv{
    string id = " ";
    string name, subject, name_low; 
    friend istream &operator >> (istream &input, gv &a);
    friend ostream &operator << (ostream &output, gv a);
};

string name_stand(string &s){
    string res;
    stringstream ss(s);
    vector<string>v;
    string tmp;
    while (ss >> tmp){
        v.pb(tmp);
    }
    int n = v.size();
    for (int i = 0; i < n; i++){
        v[i][0] = toupper(v[i][0]);
        res += v[i][0];
    }
    return res;
}

istream &operator >> (istream &input, gv &a){
    if (cnt < 10){
        a.id = "GV0" + to_string(cnt++);
    }
    else{
        a.id = "GV" + to_string(cnt++);
    }
    getline(cin, a.name);
    getline(cin, a.subject);
    a.subject = name_stand(a.subject);
    for (int i = 0; i < a.name.size(); i++){
        a.name_low += tolower(a.name[i]);
    }
    return input;
}

ostream &operator << (ostream &output, gv a){
    cout << a.id << " " << a.name << " " << a.subject;
    return output;
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
    gv a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m; cin >> m;
    cin.ignore();
    while(m--){
        string s, tmp, cc;  
        getline(cin, s);
        stringstream ss(s);
        while (ss >> tmp){
            for (int i = 0; i < tmp.size(); i++){
                cc += tolower(tmp[i]);
            }
        }
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for (int i = 0; i < n; i++){
            if (a[i].name_low.find(cc) != string :: npos){
                cout << a[i] << endl;
            }
        }
    }
    return 0;
}
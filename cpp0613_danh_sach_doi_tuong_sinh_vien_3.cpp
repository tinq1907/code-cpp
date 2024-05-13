#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int cnt = 1;

class SinhVien{
    private:
        string id, name, mclass, dob;
        string d, m, y;
        float gpa;
    public:
        friend istream &operator >> (istream &input, SinhVien &a);
        friend ostream &operator << (ostream &output, SinhVien a);
        friend void name_stand(SinhVien &a);
        friend void date_stand(SinhVien &s);
        friend bool cmp (SinhVien a, SinhVien b);
        friend void sapxep(SinhVien a[], int n);
};

void date_stand(SinhVien &a){
    stringstream ss(a.dob);
    getline(ss, a.d, '/');
    getline(ss, a.m, '/');
    getline(ss, a.y);
    if (a.d.size() == 1) a.d = "0" + a.d;
    if (a.m.size() == 1) a.m = "0" + a.m;
    a.dob = a.d + "/" + a.m + "/" + a.y;
}

void name_stand(SinhVien &a){
    stringstream ss(a.name);
    string tmp;
    string tmpname;
    vector<string> v;
    while(ss >> tmp){
        for (int i = 0; i < tmp.size(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); i++){
        v[i][0] = toupper(v[i][0]);
        if (i != v.size() - 1) tmpname += v[i] + " ";
        else tmpname += v[i];
    }
    a.name = tmpname;
}

bool cmp (SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep (SinhVien a[], int n){
    sort(a, a + n, cmp);
}

istream &operator >> (istream &input, SinhVien &a){
    if (cnt < 10){
        a.id = "B20DCCN00" + to_string(cnt++);
    }
    else a.id = "B20DCCN0" + to_string(cnt++);
    getline(input >> ws, a.name);
    getline(input >> ws, a.mclass);
    getline(input >> ws, a.dob);
    date_stand(a);
    name_stand(a);
    input >> a.gpa;
    return input;
}

ostream &operator << (ostream &output, SinhVien a){
    cout << a.id << " " << a.name << " " << a.mclass << " " << a.dob << " " << setprecision(2) << fixed << a.gpa;
    cout << endl;
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

    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

struct SinhVien{

    string name;
    string sclass;
    string dob;
    float gpa;

};

void nhap (SinhVien &a){

    getline(cin, a.name);
    cin >> a.sclass >> a.dob >> a.gpa;

}

void in (SinhVien a){

    stringstream ss (a.dob);
    string tday, tmonth, tyear;
    getline(ss, tday, '/');
    getline(ss, tmonth, '/');
    getline(ss, tyear);
    
    if(tday.size() == 1) tday = "0" + tday;
    if(tmonth.size() == 1) tmonth = "0" + tmonth;

    cout << "B20DCCN001" << " " << a.name << " " << a.sclass << " " << tday << "/" << tmonth << "/" << tyear << " " << setprecision(2) << fixed << a.gpa;
    
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

    struct SinhVien a;
    nhap(a);
    in(a);

    return 0;
}
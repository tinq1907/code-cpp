#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

struct NhanVien{
    string name;
    string gen;
    string dob;
    string add;
    string num;
    string doc;
};

void nhap (NhanVien &a){
    getline (cin, a.name);
    cin >> a.gen >> a.dob;
    cin.ignore();
    getline (cin, a.add);
    cin >> a.num >> a.doc;
}

void in (NhanVien a){
    stringstream ss1(a.dob);
    string day1, month1, year1;
    getline (ss1, day1, '/');
    getline (ss1, month1, '/');
    getline (ss1, year1);
    if (day1.size() == 1) day1 = "0" + day1;
    if (month1.size() == 1) month1 = "0" + month1;

    stringstream ss2(a.doc);
    string day2, month2, year2;
    getline (ss2, day2, '/');
    getline (ss2, month2, '/');
    getline (ss2, year2);
    if (day2.size() == 1) day2 = "0" + day2;
    if (month2.size() == 1) month2 = "0" + month2;
    
    cout << "00001 " << a.name << " " << a.gen << " " << day1 << "/" << month1 << "/" << year1 << " "
    << a.add << " " << a.num << " " << day2 << "/" << month2 << "/" << year2;
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

    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
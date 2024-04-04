#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
class SinhVien{
    private:
        string name, sclass, dob;
        float gpa;

    public:

        friend istream& operator >> (istream &nhap , SinhVien &a);
        friend ostream& operator << (ostream &suat , SinhVien a);
        // void nhap(){
        //     getline(cin, name);
        //     cin >> sclass >> dob;
        //     cin >> gpa;
        // }
        // void xuat(){
        //     stringstream ss(dob);
        //     string day, month, year;
        //     getline(ss, day, '/');
        //     getline(ss, month, '/');
        //     getline(ss, year, '/');

        //     if(day.size() == 1) day = "0" + day;
        //     if(month.size() == 1) month = "0" + month;
        //     cout << "B20DCCN001 " << name << " " << sclass << " " << day << "/" << month << "/" << year << " " <<  setprecision(2) << fixed << gpa;
        // }
};

istream& operator >> (istream &nhap , SinhVien &a){
    getline(cin, a.name);
    nhap >> a.sclass >> a.dob;
    nhap >> a.gpa;
    return nhap;
}

void chuan_hoa(string &a){
    for(int i = 0 ; i < a.size(); i++){
        a[i] = tolower(a[i]);
    }
    vector<string> v;
    string s;
    stringstream ss(a);
    while (ss >> s){
        v.push_back(s);
    }
    for (int i = 0; i < v.size(); i++){
        v[i][0] = toupper(v[i][0]);
        cout << v[i];
        if (i != v.size() - 1) cout << " ";
    }
}

ostream& operator << (ostream &suat , SinhVien a){
    
    stringstream ss(a.dob);
    string day, month, year;
    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year, '/');

    if(day.size() == 1) day = "0" + day;
    if(month.size() == 1) month = "0" + month;
    cout << "B20DCCN001 ";
    chuan_hoa(a.name); 
    cout << " " << a.sclass << " " << day << "/" << month << "/" << year << " " <<  setprecision(2) << fixed << a.gpa;
    return suat;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
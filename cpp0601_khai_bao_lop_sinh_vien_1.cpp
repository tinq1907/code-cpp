#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
class SinhVien{
    private:
        string name, sclass, dob;
        float gpa;

    public:
        void nhap(){
            getline(cin, name);
            cin >> sclass >> dob;
            cin >> gpa;
        }
        void xuat(){
            stringstream ss(dob);
            string day, month, year;
            getline(ss, day, '/');
            getline(ss, month, '/');
            getline(ss, year, '/');

            if(day.size() == 1) day = "0" + day;
            if(month.size() == 1) month = "0" + month;
            cout << "B20DCCN001 " << name << " " << sclass << " " << day << "/" << month << "/" << year << " " <<  setprecision(2) << fixed << gpa;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
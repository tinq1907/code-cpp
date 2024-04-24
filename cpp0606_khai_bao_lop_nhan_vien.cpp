#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

class NhanVien {
    private:
        string name, gen, dob, add, phone, doc;
    public:
        friend istream &operator >> (istream &mycin, NhanVien &a);
        friend ostream& operator >> (ostream &mycout, NhanVien &a);
};

istream &operator >> (istream &mycin, NhanVien &a){
    getline(mycin, a.name);
    mycin >> a.gen >> a.dob;
    cin.ignore();
    getline(mycin, a.add);
    mycin >> a.phone >> a.doc;
    return mycin;
}

ostream &operator >> (ostream &mycout, NhanVien &a){
    stringstream ss1(a.dob);
    string d1, m1, y1;
    getline(ss1, d1, '/');
    getline(ss1, m1, '/');
    getline(ss1, y1);

    stringstream ss2(a.doc);
    string d2, m2, y2;
    getline(ss2, d2, '/');
    getline(ss2, m2, '/');
    getline(ss2, y2);

    mycout << "00001 " << a.name << " " << a.gen << " " << d1 << "/" << m1 << "/" << y1 << " " << a.add << " ";
    mycout << a.phone << " " << d2 << "/" << m2 << "/" << y2;

    return mycout;
}

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}

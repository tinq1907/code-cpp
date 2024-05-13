#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
int cnt = 1;
class NhanVien{
    private:
        string id, name, gen, dob, add, tax, doc;
    public:
        friend istream &operator >> (istream &input, NhanVien &a);
        friend ostream &operator << (ostream &output, NhanVien a);
        friend void date_stand (string &s);
};

void date_stand(string &s){
    string d, m, y;
    stringstream ss(s);
    getline(ss, d, '/');
    getline(ss, m, '/');
    getline(ss, y);
    if (d.size() == 1) d = "0" + d;
    if (m.size() == 1) m = "0" + m;
    s = d + "/" + m + "/" + y;
}

istream &operator >> (istream &input, NhanVien &a){
    if (cnt == 1) cin.ignore();
    if (cnt < 10) a.id = "0000" + to_string(cnt++);
    else a.id = "000" + to_string(cnt++);
    getline(cin, a.name);
    getline(cin, a.gen);
    getline(cin, a.dob);
    getline(cin, a.add);
    getline(cin, a.tax);
    getline(cin, a.doc);
    date_stand(a.dob);
    date_stand(a.doc);
    return input;
}

ostream &operator << (ostream &output, NhanVien a){
    cout << a.id << " " << a.name << " " << a.gen << " " << a.dob << " " << a.add << " " << a.tax << " " << a.doc;
    cout << endl;
    return output;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

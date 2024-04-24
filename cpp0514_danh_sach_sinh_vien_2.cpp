#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
struct SinhVien{
    string name, sclass, dob;
    float grade;
};
void cc(SinhVien &a){
    cin.ignore();
    getline(cin, a.name);
    cin >> a.sclass >> a.dob >> a.grade;
}
void nhap(SinhVien ds[], int n){
    for (int i = 0; i < n; i++){
        cc(ds[i]);
    }
}
void day_stand(string s){
    stringstream ss(s);
    string day, month, year;
    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year);
    if(day.size() == 1) day = "0" + day;
    if(month.size() == 1) month = "0" + month;
    cout << day << "/" << month << "/" << year << " ";
}
void name_stand(string a){
    stringstream ss(a);
    vector<string> v;
    string tmp;
    while (ss >> tmp){
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[i].size(); j++){
            v[i][j] = tolower(v[i][j]);
        }
        v[i][0] = toupper(v[i][0]);
        cout << v[i] << " ";
    }

}
void in(SinhVien ds[50], int n){
    for (int i = 0; i < n; i++){
        if (i < 9) cout << "B20DCCN00" << i + 1 << " ";
        else cout << "B20DCCN0" << i + 1 << " ";
        name_stand(ds[i].name);
        cout << ds[i].sclass << " ";
        day_stand(ds[i].dob);
        cout << setprecision(2) << fixed << ds[i].grade << endl;
    }
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

    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
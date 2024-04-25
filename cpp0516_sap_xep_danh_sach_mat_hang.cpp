#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

struct goods{
    int id = 0;
    string name, group;
    float bprice, sprice;
    float profit;
};
void cc(goods &a){
    cin.ignore();
    getline(cin, a.name);
    getline(cin, a.group);
    cin >> a.bprice >> a.sprice;
    a.profit = a.sprice - a.bprice;
}
void input(goods list[], int n){
    for (int i = 0; i < n; i++){
        list[i].id = i + 1;
        cc(list[i]);
    }
}
bool cmp (goods a, goods b){
    return a.profit > b.profit;
}
void rearrange(goods list[], int n){
    sort(list, list + n, cmp);
}
void output(goods list[], int n){
    for (int i = 0; i < n; i++){
        cout << list[i].id << " " << list[i].name << " " << list[i].group << " " << setprecision(2) << fixed << list[i].profit << endl;
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
    goods list[50];
    int n; cin >> n;
    input(list, n);
    rearrange(list, n);
    output(list, n);
    system("PAUSE");
    return 0;
}
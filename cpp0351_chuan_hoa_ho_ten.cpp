#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

void namestand(string s, int n){
    string tmp;
    stringstream ss(s);
    vector<string> v;
    while (ss >> tmp){
        transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
        v.push_back(tmp);
    }
    int k = v.size();
    for (int i = 0; i < k; i++){
        v[i][0] = toupper(v[i][0]);
    }
    if (n == 1){
        cout << v[k - 1] << " ";
        for (int i = 0; i < k - 1; i++){
            cout << v[i] << " ";
        }
    }
    else{
        for (int i = 1; i < k; i++){
            cout << v[i] << " ";
        }
        cout << v[0];
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
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        namestand(s, n);
        cout << endl;
    }
    return 0;
}

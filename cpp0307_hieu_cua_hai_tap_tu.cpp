#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

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
    while(t--)
    {
        string base, sub;
        getline(cin >> ws, base);
        getline(cin >> ws, sub);
        stringstream ss1(base);
        string tmp;
        map<string, bool> mp;
        vector<string> v1;
        stringstream ss2(sub);
        while(ss1 >> tmp){
            mp[tmp] = true;
            if(find(v1.begin(), v1.end(), tmp) == v1.end())v1.push_back(tmp);
        }
        sort(v1.begin(), v1.end());
        while (ss2 >> tmp){
            if (mp.count(tmp) != 0) mp[tmp] = false; 
        }
        for (int i = 0; i < v1.size(); i++){
            if (mp.count(v1[i])){
                if (mp[v1[i]] == true) cout << v1[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
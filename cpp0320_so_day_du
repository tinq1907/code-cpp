#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

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
        int cnt[10] = {};
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0;
        for (int i = 0; i < n; i++){
            if (!isdigit(s[i])){
                flag = 2;
                break;
            }
            else if(s[0] == '0'){
                flag = 2;
                break;
            } 
            else {
                cnt[s[i] - '0']++;
            }
        }
        if (flag != 2){
            for (int i = 0; i <= 9; i++){
                if (cnt[i] == 0){
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 2) cout << "INVALID" << endl;
        else if (flag == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

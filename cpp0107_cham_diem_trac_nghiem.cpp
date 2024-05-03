#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*
    

    ios::sync_with_stdio(false); cin.tie(0);
    
    int t; cin >> t;
    while(t--)
    {
        float score = 0;
        float ppa = 10.0 / 15.0;
        char code101[] = "ABBADCCABDCCABD";
        char code102[] = "ACCABCDDBBCDDBB";
        char ans[16];
        int code; cin >> code;
        for (int i = 0; i < 15; i++){
            cin >> ans[i];
        }
        if (code == 101){
            for (int i = 0; i < 15; i++){
                if (ans[i] == code101[i]) score += ppa;
            }
        }
        else if (code == 102){
            for (int i = 0; i < 15; i++){
                if (ans[i] == code102[i]) score += ppa;
            }
        }
        cout << setprecision(2) << fixed << score << endl;
    }
    return 0;
}

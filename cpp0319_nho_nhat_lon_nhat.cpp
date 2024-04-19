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
    int m, s; cin >> m >> s;
    if(m == 1 && s== 0){
		cout << 0 << " " << 0;
		return 0;
	}
    if (s == 0 || 9 * m < s) {
        cout << "-1 -1";
        return 0;
    }
    vector<int> min(m), max(m);
    for (int i = 0; i < m; ++i){
        if (s > 9){
            max[i] = 9;
            s -= 9;
        }
        else{
            max[i] = s;
            s -= s;
        }
    }
    for (int i = 0; i < m; ++i){
        min[i] = max[i];
    }
    if (min[m - 1] == 0){
        min [m - 1] = 1;
        for (int i = m-2; i >= 0 ; --i){
            if (min[i] != 0) {
                min[i] -= 1;
                break;
            }
        }
    }
    
    for (int i = m - 1; i >= 0; --i){
        cout << min[i];
    }
    cout << " ";
    for (int i = 0; i < m; i++){
        cout << max[i];
    }
    return 0;
}
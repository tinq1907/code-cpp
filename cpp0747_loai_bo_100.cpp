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
        string s;
        cin >> s;
        string temp = "100";
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s.find(temp) != -1) {
                s.erase(s.find(temp), 3);
                count += 3;
            }
        }
        cout << count;
        cout << endl;
    }
    return 0;
}
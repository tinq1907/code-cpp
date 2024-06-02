#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

int count_atmost_K_substr(string &s, int k){
    int l = 0, r = 0;
    int n = s.size();
    int distinct = 0;
    int substr = 0;
    vector<int> char_freq(26,0);
    while (r < n){
        // get char index and update counting vector
        int indx = s[r] - 'a';
        char_freq[indx]++;
        // if frequency becomes 1, increase distinct by 1 (a new distinct char is added)
        if (char_freq[indx] == 1){
            distinct++;
        }
        while (distinct > k){
            char_freq[s[l] - 'a']--;
            if (char_freq[s[l] - 'a'] == 0){
                distinct--;
            }
            l++;
        }
        substr += r - l + 1;
        r++;
    }
    return substr;
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
    while(t--)
    {
        string s; cin >> s;
        int k; cin >> k;
        int n = s.size();
        int res = count_atmost_K_substr(s, k) - count_atmost_K_substr(s, k - 1);
        cout << res << endl;
    }
    return 0;
}
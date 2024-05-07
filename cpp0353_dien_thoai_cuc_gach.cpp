#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

bool checkpali(string s){
    for (int i = 0; i < s.size() ; i++){
        if (s[i] != s[s.size() - i - 1]) return false;
    }
    return true;
}

string convert(string s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
    }
    string res = "";
    for (int i = 0; i < n; i++){
        if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c') res += "2";
        else if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f') res += "3";
        else if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i') res += "4";
        else if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l') res += "5";
        else if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o') res += "6";
        else if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's') res += "7";
        else if (s[i] == 't' || s[i] == 'u' || s[i] == 'v') res += "8";
        else if (s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z') res += "9";
    }
    return res;
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
        if(!checkpali(convert(s))) cout << "NO" << endl;
        else cout << "YES" << endl;
    } 
    return 0;
}
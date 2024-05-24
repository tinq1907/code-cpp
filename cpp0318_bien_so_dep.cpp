#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;

bool check1(string s){
    if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return true;
    if (s[5] != '6' && s[5] != '8'){
        for (int i = 5; i < 10; i++){
            if (i == 8) continue;
            else if(i != 7){
                if (s[i] - '0' >= s[i + 1] - '0') return false;
            }
            else{
                if (s[i] - '0' >= s[i + 2] - '0') return false;
            }
        }
        return true;
    }
    for (int i = 5; i <= 10; i++){
        if (i == 8) continue;
        else{
            if (s[i] != '6' && s[i] != '8') return false;
        }
    }
    return true;
}

int char_to_int(char c) {
    return c - '0';
}

array<int, 5> get_number_in_str(string s, int start, int end) {
    string str = s.substr(start, end);
    array<int, 5> n;

    for(int i=0; i<5; i++) {
        n[i] = char_to_int(str[i]);
    }
    return n;
}

bool check(string s) {
    // Bo dau . trong chuoi
    s.erase(remove(s.begin(), s.end(), '.'), s.end());
    // Tach lay so tu nhien trong chuoi
    array<int, 5> n = get_number_in_str(s, 5, s.length());
    // Mac dinh ket qua la dung
    bool result = true;
    int length = sizeof(n) / sizeof(int);
    // Cả 5 chữ số được sắp theo thứ tự tăng chặt từ trái qua phải.
    for(int i=0; i<length; i++) {
        if(i == 0) continue;
        if(n[i] <= n[i-1]) {
            result = false;
            break;
        }
    }
    if(result == true) return true;
    result = true;
    // Cả 5 chữ số đều bằng nhau
    for(int i=0; i<length; i++) {
        if(i == 0) continue;
        if(n[i] != n[i-1]) {
            result = false;
            break;
        }
    }
    if(result == true) return true;
    result = true;
    // Ba chữ số đầu bằng nhau và hai chữ số cuối bằng nhau
    if(n[0] != n[1] || n[1] != n[2] || n[3] != n[4]) result = false;
    if(result == true) return true;
    result = true;
    //Cả 5 chữ số đều là 6 và/hoặc 8 (số lộc phát).
    for(int i=0; i<length; i++) {
        if(n[i] != 6 && n[i] != 8) result = false;
    }

    return result;
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
        string s;
        cin >> s;
        if (check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
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

    // string s;
	// int flag = 1;
	// while(cin >> s){
	// 	for(int i = 0; i < s.size(); i++){
	// 		if(s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
	// 	}
	// 	if(flag){
	// 		s[0] = toupper(s[0]);
	// 		flag = 0;
	// 	}
	// 	if(s[s.size() - 1] == '.' || s[s.size() - 1] == '?' || s[s.size() - 1] == '!'){
	// 		flag = 1;
	// 		s.erase(s.end() - 1);
	// 		cout << s << endl;
	// 	} else {
	// 		cout << s << " ";
	// 	}
	// }
    string text = "";
    string line = "";
    while (cin >> line)
    {
        if (line.empty()) break;
        text += line + " ";
    } 
    // bo ky tu xuong dong
    while (text.find("\n") != string::npos){
        text.erase(text.find("\n"), 1);
    }
    // bo cac ky tu trang thua
    while (text.find("  ") != string::npos){
        text.erase(text.find("  "), 1);
    }

    int l = text.size();
    for (int i = 0; i < l; i++){
        text[i] = tolower(text[i]);
        if (text[i] == '.' || text[i] == '?' || text[i] == '!'){
            if(i < l - 1) {
                text[i] = '\n';
            }
            else {
                text.erase(i, 1);
            }
        }
    }
    // BO KI TU TRANG O DAU DONG SAU KHI XU LY DAU NGAT CAU;
    for(int i = 0; i < l; i++){
        if(text[i] == '\n' && text[i - 1] == ' ') {
            text.erase(i - 1, 1);
        }
    }

    for(int i = 0; i < l; i++){
        if(text[i] == '\n' && text[i + 1] == ' ') {
            text.erase(i + 1, 1);
        }
    }

    for (int i = 0; i < l; i++){
        if(i == 0) text[i] = toupper(text[i]);
        if(text[i] == '\n') {
            text[i + 1] = toupper(text[i + 1]);
        }
    }
    cout << text;
    return 0;
}
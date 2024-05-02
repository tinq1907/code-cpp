#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++){
    	s[i] = tolower(s[i]);
    	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ){
    		s[i] = '0';
		}
	}
	for (int i = 0; i < n; i++){
		if (s[i] != '0') cout << "." << s[i];
	}
    return 0;
}

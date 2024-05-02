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
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
    	s[i] = tolower(s[i]);
	}
    string tmp;
    vector<string> v;
    stringstream ss(s);
    while (ss >> tmp) v.push_back(tmp);
    int n = v.size();
	for (int i = 0; i < n - 1; i++){
		v[i][0] = toupper(v[i][0]);
		cout << v[i] ;
		if (i != n - 2) cout << " ";
	}
	for (int i = 0; i < v[n - 1].size(); i++){
		v[n - 1][i] = toupper(v[n - 1][i]);
	}
	cout << ", " << v[n - 1];
    return 0;
}

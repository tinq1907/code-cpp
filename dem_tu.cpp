#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
	while (t--)
	{
    	int cnt = 0;
		string s;
		getline(cin, s);
		string word;
		stringstream ss(s);
		while (ss >> word){
			cnt++;
		}	
		cout << cnt << endl;
	}
    return 0;
}

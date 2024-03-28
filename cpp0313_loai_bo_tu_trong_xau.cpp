#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{

    ios::sync_with_stdio(false); cin.tie(0);
    string s;
    getline(cin, s);
    string word;
    stringstream ss(s);
    string sd;
    cin >> sd;
    while (ss >> word){
    	if (word != sd){
    		cout << word << " ";
		}
	}
    return 0;
}

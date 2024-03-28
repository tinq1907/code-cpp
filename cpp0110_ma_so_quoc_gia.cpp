#include<bits/stdc++.h>
using namespace std;
int main (){
	int t; 
	cin >> t;
	while (t--){
		string code;
		cin >> code;
		int l = code.length();
		for (int i = 0; i < l-2; i++){
			if (code[i] == '0' && code[i + 1] == '8' && code[i + 2] == '4'){
				code[i] = 'c';
				code[i + 1] = 'c';
				code[i + 2] = 'c';
			}
		}
		for (int i = 0; i < l; i++){
			if (code[i] != 'c') cout << code[i];
		}
		cout << endl;
	}
}

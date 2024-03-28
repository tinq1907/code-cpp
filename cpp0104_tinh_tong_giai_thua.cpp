#include<bits/stdc++.h>
using namespace std;
int main (){
	int n, sum = 0, term = 1;
	cin >> n;
	for (int i = 1; i <= n; i++){
		term *= i;
		sum += term;
	}
	cout << sum;
	return 0; 
}

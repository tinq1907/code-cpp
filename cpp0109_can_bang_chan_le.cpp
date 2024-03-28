#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check_cbcl(int n){
	int odd = 0;
	int even = 0;
	while (n >=1){
		if (n % 2 == 1) odd++;
		else if (n % 2 == 0) even++;
		n /= 10;
	}
	if (odd == even) return true;
	return false;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
	int num;
	int dem = 0;
	cin >> num;
	for (int i = pow(10, num-1); i < pow(10, num); i++){
		if (check_cbcl(i)) {
		cout << i << " ";
		dem++;
		if(dem == 10) {
			cout << endl;
			dem = 0;
			}
		}
	}
    return 0;
}

#include<iostream>
using namespace std;
typedef long long int ll;
bool test(int a, ll m) {
	int sum = 0;
	for (int i = 1; i <= a; i++)
		sum += i % m;
	return sum == m;
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll a, m; cin >> a >> m;
		if (test(a, m)) cout << 1;
		else cout << 0;
		cout << "\n";
	}
}
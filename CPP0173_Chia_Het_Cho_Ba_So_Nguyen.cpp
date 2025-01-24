#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long a = x * y / __gcd(x, y);
		a = a * z / __gcd(a, z);
		long long d = pow(10, n - 1);
		long long e = pow(10, n);
		if (a >= e)
			cout << -1 << endl;
		else {
			long long c = d % a;
			long long u = d + a - c;
			if (c == 0)
				cout << d << endl;
			else
			cout << u << endl;
		}
	}
}
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		ll a, x, y;
		cin >> a >> x >> y;
		ll z = __gcd(x, y);
		for (int i = 0; i < z; i++)
			cout << a;
		cout << endl;
	}
}
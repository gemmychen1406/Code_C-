#include<iostream>
#include<string>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		long long int n; cin >> n;
		long long int a = 0;
		for (int i = 0; i < s.length(); i++) {
			a = a * 10 + s[i] - '0';
			a %= n;
		}
		cout << a << endl;
	}
}
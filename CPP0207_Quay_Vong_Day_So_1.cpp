#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--)
	{
		int n, d; cin >> n >> d;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		for (int i = d; i < n; i++) cout << m[i] << " ";
		for (int i = 0; i < d; i++) cout << m[i] << " ";
		cout << endl;
}
}
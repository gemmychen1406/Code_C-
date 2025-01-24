/*#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i == 0) b[i] = a[i];
			else b[i] = b[i - 1] + a[i];
		}
		while(q--){
			int l, r;
			cin >> l >> r;
			if (l > r){
				int c = l;
				l = r;
				r = c;
			}
			cout << b[r - 1] - b[l - 2] << "\n";
		}	   
		cout << "\n";
	}
}
*/
#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int> m, int a, int b) {
	int x = 0;
		for (int i = a-1; i < b; i++)
			x += m[i];
	return x;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		
		while(k--){
			int a, b; cin >> a >> b;
		cout << sum(m, a, b) << endl;
		}
	}
}
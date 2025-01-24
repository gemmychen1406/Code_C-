#include<iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < min(n/2, m/2); i++){
			int x = a[i][i];
			for (int j = i + 1; j < m - i; j++){
				int y = x;
				x = a[i][j];
				a[i][j] = y;
			}
			for (int j = i + 1; j < n - i; j++){
				int y = x;
				x = a[j][m - 1 - i];
				a[j][m - 1 - i] = y;
			}
			for (int j = m - 2 - i; j >= i; j--){
				int y = x;
				x = a[n - 1 - i][j];
				a[n - 1 - i][j] = y;
			}
			for (int j = n - 2 - i; j >= i; j--){
				int y = x;
				x = a[j][i];
				a[j][i] = y;
			}
			//cout << x << "\n";
		}
		
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++) cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n * m];
		int b[n][m];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++) cin >> b[i][j];
		}
//		for (int i = 0; i < n; i++){
//			for (int j = 0; j < m; j++) cout << b[i][j] << " ";
//			cout << "\n";
//		}
		int k = 0; 
		for (int i = 0; i < min(n/2, m/2); i++){
			for (int j = i; j < m - 1 - i; j++) a[k++] = b[i][j];
			for (int j = i; j < n - 1 - i; j++) a[k++] = b[j][m - 1 - i];
			for (int j = m - 1 - i; j > i; j--) a[k++] = b[n - 1 - i][j];
			for (int j = n - 1 - i; j > i; j--) a[k++] = b[j][i];
		}
		if (n % 2 && n <= m){
			for (int i = n/2; i < m - n/2; i++) a[k++] = b[n/2][i];
		}
		if (m % 2 && m < n){
			for (int i = m/2; i < n - m/2; i++) a[k++] = b[i][m/2];
		}
		for (int i = k - 1; i >= 0; i--) cout << a[i] << " ";
		cout << "\n";
	}
}

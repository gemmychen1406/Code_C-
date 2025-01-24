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
		int a[n][m];
		for (int i = 0 ; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}	 
		int k = n, h = m; 
		int N[n * m];
		int g = 0;
		for (int i = 0; i < k * 1.0/ 2; i++){
			for (int j = i; j < m; j++)N[g++] = a[i][j];
			for (int j = i + 1; j < n; j++)N[g++] = a[j][m - 1];
			for (int j = m - 2; j >= i; j--)N[g++] = a[n - 1][j];
			for (int j = n - 2; j > i; j--)N[g++] = a[j][i];
			m--; n--;
		}  
		for (int i = 0; i < h * k; i++) cout << N[i] << " ";
		cout << "\n";
	}
}

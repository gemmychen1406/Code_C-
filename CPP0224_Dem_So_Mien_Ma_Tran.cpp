#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int dem(int a[101][101], int cnt, int i, int j){
		a[i][j] = 0;
		int ok = 1;
		for (int k = i - 1; k <= i + 1; k++){
			for (int h = j - 1; h <= j + 1; h++){
				if (a[k][h] == 1) cnt = dem(a, cnt, k, h);
				ok = 0;
			}
		}
		if (ok) cnt++;
	return cnt;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a[101][101] ={0};
		int m, n;
		cin >> n >> m;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}	
		int cnt = 0;  
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				if (a[i][j] == 1) cnt = dem(a, cnt, i, j);
			}
		}	 
		cout << cnt << "\n";
	}
}

#include<iostream>
using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int m, n, k;
		cin >> n >> m >> k;
		int a[n + 1][m + 1] = {0};
		for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin>>a[i][j];
                a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
            }
        }
        int st1 = n - k + 1, st2 = m - k + 1;
        for(int i = 1; i <= st1; i++)
        {
            for(int j = 1; j <= st2; j++) cout << (a[i + k - 1][j + k - 1] - a[i - 1][j + k - 1] - a[i + k - 1][j - 1] + a[i - 1][j - 1]) / (k * k) << ' ';
            cout << endl;
        }
	}
}
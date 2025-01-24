#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n*n];
	for (int i = 0; i < n * n; i++) cin >> a[i];
	sort(a, a + n * n);
	int k = 0;
//	for (int i = 0; i < n*n;i++) cout << a[i] << " ";
//	cout << "\n";
	int b[n][n];
	for (int i = 0; i < n/2; i++){
		for (int j = i; j < n - 1 - i; j++) b[i][j] = a[k++];
		for (int j = i; j < n - 1 - i; j++) b[j][n - 1 - i] = a[k++];
		for (int j = n - 1 - i; j > i; j--) b[n - 1 - i][j] = a[k++];
		for (int j = n - 1 - i; j > i; j--) b[j][i] = a[k++];
	}
	if (n % 2) b[n/2][n/2] = a[k];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) cout << b[i][j] << " ";
		cout << "\n";
	}
}

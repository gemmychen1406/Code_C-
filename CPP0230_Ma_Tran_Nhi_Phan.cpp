#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][3];
	int b[n] = {0};
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 3; j++){
			cin >> a[i][j];
			b[i] += a[i][j];
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (b[i] > 1) cnt++;
	}
	cout << cnt;
}

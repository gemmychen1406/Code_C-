#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int a[1000000] = {1};
void snt(int y){
	a[1] = 1;
	for (int i = 0; i * i <= y;i++){
		if (a[i] == 0){
			for (int j = i * i; j <= y; j+= i) a[j] = 1;
		}
	}
}
void tong(int n){
	for (int i = 2; i <= n / 2; i++){
		if (a[i] == 0 && a[n - i] == 0){
			cout << i << " " << n - i;
			return;
		}
	}
	cout << -1;
	return;
}
int main(){
	int t;
	cin >> t;
	snt(1000000);
	while(t--){
		int n;
		cin >> n;
		tong(n);
		cout << "\n";
	}
}

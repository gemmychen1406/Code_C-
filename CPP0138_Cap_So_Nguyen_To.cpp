#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int snt(int n){
	if (n == 2 || n == 3 || n == 5) return 1;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return 0;
	}
	return 1;
}
void tong(int n){
	for (int i = 2; i <= n / 2; i++){
		if (snt(i) && snt(n - i)){
			cout << i << " " << n - i;
			return;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		tong(n);
		cout << "\n";
	}
}

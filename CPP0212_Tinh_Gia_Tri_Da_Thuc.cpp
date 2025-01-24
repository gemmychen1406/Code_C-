#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
long long mod = 1e9 + 7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long sum = a[n - 1];
		long long h = x;
		for (int i = n - 2; i >= 0; i--){
			sum = (sum + h * a[i]) % mod;
			h *= x;
			h %= mod;
		}	   
		cout << sum << "\n";
	}
}

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int test(int M[], int n) {
	for (int i = 1; i < 18; i++){
		if (M[i] == n)
			return 1;
		if (n < M[i]) break;
	}
	return 0;
}
int main(){
	int f[20];
	f[1] = 0;
	f[2] = 1;
	for (int i = 3; i < 18; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;	
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++)   
			if (test(f, a[i])) cout << a[i] << " ";
		cout << "\n";
	}
}

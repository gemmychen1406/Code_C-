#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int test(long long M[], long long n) {
	for (int i = 0; i < 93; i++)
		if (M[i] == n)
			return 1;
	return 0;
}
int main(){
	long long f[100];
	f[1] = f[2] = 1;
	for (int i = 3; i < 93; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;	   
		if (test(f, n)) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
}

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
long long ucln(long long a, long long b){
	if (a < b){
		int c = a;
		a = b;
		b = c;
	}
	if (a % b == 0) return b;
	return ucln(b, a % b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		long long u = ucln(a, b);
		cout << (a * b / u) << " " << u << "\n";
	}
}
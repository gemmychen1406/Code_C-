#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int check(long long n){
	int k = n % 10;
	n /= 10;
	while(n){
		int h = n % 10;
		if (abs(h - k) != 1) return 0;
		n /= 10;
		k = h;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if (check(n)) cout << "YES";
		else cout << "NO";	   
		cout << "\n";
	}
}

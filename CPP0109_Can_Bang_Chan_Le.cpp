#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int check(int n){
	int l = 0, c = 0;
	while(n){
		int k = n % 10;
		if (k % 2) l++;
		else c++;
		n /= 10;
	}
	if (l == c) return 1;
	return 0;
}
int main(){
	int n;
	cin >> n;
	int x = 1;
	for (int i = 0; i < n; i++) x *= 10;
	int cnt = 0;
	for (int i = x/10; i < x; i++){
		if (check(i) == 1) {
			cout << i << " ";
			cnt++;
		}
		if (cnt == 10){
			cout << "\n";
			cnt = 0;
		}
	}
}

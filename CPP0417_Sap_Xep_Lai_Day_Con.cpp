#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)	cin >> a[i];
		int l = 0, r = n - 1;
		while(a[l] <= a[l + 1]) l++;
		while(a[r] >= a[r - 1]) r--;
		int min = 1e9, max = -1e9;
		for (int i = l; i <= r; i++) {
			if (a[i] > max) max = a[i];
			if (a[i] < min) min = a[i];
		}
		int x = l, y = r;
		for (int i = 0; i < l; i++) {
			if (a[i] > min) {
				x = i;
				break;
			}
		}
		for (int i = n - 1; i >= r; i--) {
			if (a[i] < max) {
				y = i;
				break;
			}
		}
		cout << x + 1 << " " << y + 1 << "\n";
	}
}

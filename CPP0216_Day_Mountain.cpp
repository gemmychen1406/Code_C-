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
		for (int i = 0; i < n; i++) cin >> a[i];
		int l, r;
		cin >> l >> r;
		if (l > r){
			int c = l;
			l = r;
			r = c;
		}
		int x = l;
		while(l >= 0){
			if(l == r) break;
			if(a[l] > a[l + 1]) break;
			l++;
		}
		while(r){
			if(r == x) break;
			if (a[r] > a[r - 1]) break;
			r--;
		}
		if (l < r) cout << "No";
		else cout << "Yes";
		cout << "\n";
	}
}

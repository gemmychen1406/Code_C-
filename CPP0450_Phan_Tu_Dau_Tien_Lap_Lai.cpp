#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;	   
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<int> b(1000001, 0);
		int ok = 1;
		for (int i = 0; i < n; i++){
			b[a[i]]++;
			if (b[a[i]] > 1){
				ok = 0;
				cout << a[i];
				break;
			}
		}
		if (ok) cout << -1;
		cout << "\n";
	}
}

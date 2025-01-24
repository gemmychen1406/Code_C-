#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int cnt = 0;
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			if (a == x) cnt ++;
		}	   
		if (cnt == 0) cout << -1;
		else cout << cnt;
		cout << "\n";
	}
}

#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cnt = 0;
		int a[n][n];
		map <int , int > m;
		for(int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
				if (i == 0) m[a[i][j]] = 1;
			}
		}
		for (int i = 1; i < n; i++){
			for (int j = 0; j < n; j++){
				if (m[a[i][j]] == i) m[a[i][j]] = i + 1;
			}
		}
//		for (auto i: m){
//			cout << i.first << " " << i.second << "\n";
//		}
		for(auto i: m){
			if (i.second == n) cnt++;
		}
		cout << cnt << "\n";
	}
}

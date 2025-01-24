#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,m,n;
		cin >> m >> n >> a >> b;
		int cnt = 0;
		for (int i = m; i <= n; i++){
			if (i % a == 0 || i % b == 0) cnt++;
		}	   
		cout << cnt;
		cout << "\n";
	}
}

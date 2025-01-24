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
		int a[n + 1], a1[n + 1], b[n + 1], b1[n + 1];
		a[0] = b[0] = a1[0] = b1[0] = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			if (i == 1) a1[i] = a[i];
			else a1[i] = a1[i - 1] + a[i];
		}
		for (int i = 1; i <= n; i++){
			cin >> b[i];
			if (i == 1) b1[i] = b[i];
			else b1[i] = b1[i - 1] + b[i];
		}	   
		int mx = 0;
		for (int i = 0; i <= n - 1; i++){
			for (int j = n; j > i; j--){
				if ((a1[j] - a1[i]) == (b1[j] - b1[i])){
					if ((j - i) > mx) mx = j - i;
					break;
				}	
			}
		}
		cout << mx << "\n";
	}
}

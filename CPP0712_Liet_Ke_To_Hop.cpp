#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int x[21];
void Try(int i, int n, int k){
	for (int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if (i == k) {
			for (int h = 1; h <= k; h++) cout << x[h];
			cout << " ";
		}
		else {
			Try(i + 1, n, k);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		Try(1, n , k);	   
		cout << "\n";
	}
}

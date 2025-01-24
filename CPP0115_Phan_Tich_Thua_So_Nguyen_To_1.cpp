#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
void pt(int n){
	int cnt = 0;
	int i = 2;
	while(n > 1){
		while(n % i == 0){
			cnt++;
			n /= i;
		}
		if (cnt != 0){
			cout << i << " " << cnt << " ";
			cnt = 0;
		}
		i++;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		pt(n);
		cout << "\n";
	}
}

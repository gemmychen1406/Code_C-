#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int a[100001] = {0};
void snt(){
	a[0] = a[1] = 1;
	for (int i = 2; i <= 1000; i++){
		if(a[i] == 0){
			for (int j = i * i; j <= 10000; j += i){
				a[j] = 1;
			}
		}
	}
}
int main(){
	snt();
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		if (l > r) swap(l, r);
		int cnt = 0;
		for (int i = l; i <= r; i++){
			if (a[i] == 0) cnt++;
		}	   
		cout << cnt << "\n";
	}
}

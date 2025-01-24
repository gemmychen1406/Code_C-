#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int a[10005] = {0};
void sanguoc(){
	a[0] = a[1] = 1;
	for (int i = 2; i * i <= 10000; i++){
		if(a[i] == 0){
			a[i] = i;
			for(int j = i * i; j <= 10000; j += i){
				int t = 2;
				while(j % t != 0)t++;
				a[j] = t;
			}
		}
	}
}
int main(){
	sanguoc();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++){
			if(a[i] == 0) a[i] = i;
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}

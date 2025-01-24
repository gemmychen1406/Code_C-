#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int b[1000001] = {0};
void sang(){
	b[0] = b[1] = 1;
	for (int i = 2; i <= 1000; i++){
		if (b[i] == 0){
			for (int j = i * i; j < 1000001; j += i){
				b[j] = 1;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int cnt = 0;
		for (long long i = 2; i * i <= n; i++){
			if (b[i] == 0) cnt++;
		}	   
		cout << cnt << "\n";
	}
}

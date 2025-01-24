#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	long long f[100];
	f[1] = f[2] = 1;
	for (int i = 3; i < 93; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;	   
		cout << f[n] << "\n";
	}
}

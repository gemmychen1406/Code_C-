#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
#define ll long long 
ll mod = 1e9 + 7; 
ll fo(int n, ll a[]){ 
	if(n == 0) return 0; 
	else if(n == 1) return 1; 
	else{ 
		a[0] = 0; a[1] = 1; 
		for(int i=2; i<=n; i++){ 
			a[i] = (a[i - 2] % mod + a[i - 1] % mod) % mod; 
		} 
	} 
	return a[n]; 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[1000]; 
		cout << fo(n,a);   
		cout << "\n";
	}
}

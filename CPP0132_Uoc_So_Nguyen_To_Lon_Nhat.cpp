#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
ll snt(ll n){
    for(ll i =2 ; i <= sqrt(n) ; i++){
        if(n%i==0){
            return 0;
        }
    }
    return n > 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
		ll i = 2;
		if (snt(n))
			cout << n << endl;
		else {
			while (i <= n) {
				if (n % i == 0 && snt(n / i)) {
					cout << n / i << endl;
					break;
				}
				i++;
			}
		}
    }
}
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
int test(int n,int k){
	int i = 2, x = 0;
	while (i <= n) {
		while (snt(i) && n % i == 0) {
			x++;
			if (x == k)
				return i;
			n /= i;
		}
		i++;
	}
	return -1;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		int n,k; cin >> n>>k;
		cout << test(n, k) << endl;
	}
}